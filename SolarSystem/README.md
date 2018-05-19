# SolarSystemCG


## 下载：

git clone https://github.com/Zack1005/SolarSystemCG.git

下载完成以后需要更改一下第三方库的目录。所有我们需要的库都存放在了Libraries文件夹中。

按照以下步骤添加：

- 右键项目SolarSystem
- 点击属性->VC++目录
- 在包含目录中添加Libraries中的Includes文件夹
- 在库目录中添加Libraries中的Libs文件夹
- 点击链接器->输入
- 在附加依赖项中加入以下两项
	- opengl32.lib
	- glfw3.lib

大家以后有任何要使用的第三方库，都放到Libraries中，具体的文件大家看一下目录里面的就知道了

## resources目录结构：

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

### 迭代总结
本次迭代已经完成：

- 模型制作
- 天空盒的渲染。

出现的问题：

- 文件结构更改以及混乱
- 由于失误merge了不同的分支。

**解决方案：**

- **重新上传整个文件，只需要直接使用命令开头提到了命令就可以下载整个工程文件下来了**
- 每个人在自己的分支里面做事情

## 2018-5-18

完成RenderModel

修改RenderSkybox

导入模型

测试



