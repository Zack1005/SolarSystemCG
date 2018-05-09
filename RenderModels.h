#pragma once
#include "model.h"
#include "Shader.h"

#include <glm\glm.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <glm\gtc\matrix_transform.hpp>
typedef struct movingPara {//第一次迭代我们假设所有星球的运动的都是圆形，因此只需要在xz平面分别使用sin，cos函数再乘以该角速度即可。
	float EarthW=1;//初始化地球的角速度
	float MercuryW = EarthW *1.56 ;
	float VenusW = EarthW *1.16 ;
	float MarsW = EarthW * 0.8;
	float JupiterW = EarthW * 0.43;
	float SaturnW = EarthW * 0.33;
	float UranusW = EarthW *0.226 ;
	float NeptuneW = EarthW * 0.167;

	float EarthSemidiameter = 40;//半径，即你需要将这些模型平移到世界坐标系中的位置。
	float MercurySemidiameter = EarthSemidiameter * 0.387;
	float VenusSemidiameter =EarthSemidiameter* 0.723;
	float MarsSemidiameter =EarthSemidiameter* 1.523;
	float JupiterSemidiameter = EarthSemidiameter *5.202 ;
	float SaturnSemidiameter = EarthSemidiameter * 9.554;
	float UranusSemidiameter = EarthSemidiameter * 19.229 ;
	float NeptuneSemidiameter = EarthSemidiameter * 30.1;
}movingPara;
/*该模块需要做以下几件事：
1.将已经加载好的模型通过model，view，projection矩阵转换，赋予一定行为与动作。具体参数在movingPara结构体中给出，后面会对该结构体进行解释。
2.函数没有返回值，需要在最后调用每一个Model的Draw方法来进行渲染，具体可以参考下述代码。
https://learnopengl.com/code_viewer_gh.php?code=src/3.model_loading/1.model_loading/model_loading.cpp


行星的名字如下（按照离太阳由近到远）：
Mercury
Venus
Earth
Mars
Jupiter
Saturn
Uranus
Neptune

*/

//modelShader是你需要的着色器，Shader类的实现与教程相同
//planets是一个map，可以根据Model的字符串名字来进行索引。
//view是摄像机的视角矩阵，直接相乘即可。
void RenderModels(Shader& modelShader, map<string, Model>&planets,movingPara& hps, glm::mat4& view) {

}