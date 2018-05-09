#pragma once
#include "model.h"
#include "Shader.h"

#include <glm\glm.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <glm\gtc\matrix_transform.hpp>
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
void RenderModels(Shader& modelShader, map<string, Model>&planets,movingPara& hps, glm::mat4& view) {

}