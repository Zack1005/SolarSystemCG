# SolarSystemCG

项目配置：

- 将Libraries加入工程中。具体方法如下
	- 右键工程，点击属性
	- 配置属性->VC++目录
	- 在包含目录中添加Libraries中的include文件夹
	- 在库目录中添加Libraries中的lib文件夹
- 在链接器->输入->附加依赖项中添加以下两项
	- opengl32.lib
	- glfw3.lib 
- 将所有.h文件加入头文件目录中
- 将.cpp和.c文件加入源文件目录中

以后大家有任何新添加的包或者库都可以按照Libraries文件夹中的格式添加。

 ---

resources目录结构：

resources下有三个子文件：

- Models，用来存放模型
- Shaders，用来存放所有着色器
- Textures，用来存放所有的纹理和图片


---

使用Debug | x86运行


## 2018-5-9 
待完成模块：

RenderModel
RenderSkybox
RenderShadow



