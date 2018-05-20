#pragma once
#include "Model.h"
#include "Shader.h"
#include "Camera.h"

#include <glm/glm.hpp>
#include <glm/gtc\type_ptr.hpp>
#include <glm/gtc\matrix_transform.hpp>
#include <GLFW/glfw3.h>


typedef struct movingPara {//��һ�ε������Ǽ�������������˶��Ķ���Բ�Σ����ֻ��Ҫ��xzƽ��ֱ�ʹ��sin��cos�����ٳ��Ըý��ٶȼ��ɡ�
	float EarthW=1;//��ʼ������Ľ��ٶ�
	float MercuryW = EarthW *1.56 ;
	float VenusW = EarthW *1.16 ;
	float MarsW = EarthW * 0.8;
	float JupiterW = EarthW * 0.43;
	float SaturnW = EarthW * 0.33;
	float UranusW = EarthW *0.226 ;
	float NeptuneW = EarthW * 0.167;

	float EarthSemidiameter = 40;//�뾶��������Ҫ����Щģ��ƽ�Ƶ���������ϵ�е�λ�á�
	float MercurySemidiameter = EarthSemidiameter * 0.387;
	float VenusSemidiameter =EarthSemidiameter* 0.723;
	float MarsSemidiameter =EarthSemidiameter* 1.523;
	float JupiterSemidiameter = EarthSemidiameter *5.202 ;
	float SaturnSemidiameter = EarthSemidiameter * 9.554;
	float UranusSemidiameter = EarthSemidiameter * 19.229 ;
	float NeptuneSemidiameter = EarthSemidiameter * 30.1;
}movingPara;
/*��ģ����Ҫ�����¼����£�
1.���Ѿ����غõ�ģ��ͨ��model��view��projection����ת��������һ����Ϊ�붯�������������movingPara�ṹ���и����������Ըýṹ����н��͡�
2.����û�з���ֵ����Ҫ��������ÿһ��Model��Draw������������Ⱦ��������Բο��������롣
https://learnopengl.com/code_viewer_gh.php?code=src/3.model_loading/1.model_loading/model_loading.cpp


���ǵ��������£�������̫���ɽ���Զ����
Sun
Mercury
Venus
Earth
Mars
Jupiter
Saturn
Uranus
Neptune

*/

//modelShader������Ҫ����ɫ����Shader���ʵ����̳���ͬ
//planets��һ��map�����Ը���Model���ַ�������������������
//view����������ӽǾ���ֱ����˼��ɡ�
void RenderModels(Shader& modelShader, map<string, Model>&planets,movingPara& hps, glm::mat4& view, glm::mat4& projection) {
	modelShader.use();
	modelShader.setMat4("projection", projection);
	modelShader.setMat4("view", view);
	glm::mat4 model;
	//Sun
	model = ModelTransform(1, 0, 0);
	modelShader.setMat4("model", model);
	planets["Sun"].Draw(modelShader);
	//Mercury
	model = ModelTransform(1, hps.MercuryW, hps.MercurySemidiameter);
	modelShader.setMat4("model", model);
	planets["Mercury"].Draw(modelShader);
	//Venus
	model = ModelTransform(1, hps.VenusW, hps.VenusSemidiameter);
	modelShader.setMat4("model", model);
	planets["Venus"].Draw(modelShader);
	//Earth
	model = ModelTransform(1, hps.EarthW, hps.EarthSemidiameter);
	modelShader.setMat4("model", model);
	planets["Earth"].Draw(modelShader);
	//Mars
	model = ModelTransform(1, hps.MarsW, hps.MarsSemidiameter);
	modelShader.setMat4("model", model);
	planets["Mars"].Draw(modelShader);
	//Jupiter
	model = ModelTransform(1, hps.JupiterW, hps.JupiterSemidiameter);
	modelShader.setMat4("model", model);
	planets["Jupiter"].Draw(modelShader);
	//Saturn
	model = ModelTransform(1, hps.SaturnW, hps.SaturnSemidiameter);
	modelShader.setMat4("model", model);
	planets["Saturn"].Draw(modelShader);
	//Uranus
	model = ModelTransform(1, hps.UranusW, hps.UranusSemidiameter);
	modelShader.setMat4("model", model);
	planets["Uranus"].Draw(modelShader);
	//Neptune
	model = ModelTransform(1, hps.NeptuneW, hps.NeptuneSemidiameter);
	modelShader.setMat4("model", model);
	planets["Neptune"].Draw(modelShader);
}

glm::mat4 ModelTransform(float sf, float tf, float rf) {
	glm::mat4 model;
	model = glm::scale(model, glm::vec3(sf, sf, sf));
	model = glm::translate(model, glm::vec3(tf, 0.0f, 0.0f));
	model = glm::rotate(model, glm::radians((GLfloat)glfwGetTime() * rf), glm::vec3(0.0f, 1.0f, 0.0f));
	return model;
}