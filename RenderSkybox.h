#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"
#include "Texture.h"

#include <stb_image.h>

#include <iostream>
#include <vector>

void SetSkybox(unsigned int& skyboxVAO) {
	float skyboxVertices[] = {
		// positions          
		-5.0f,  5.0f, -5.0f,
		-5.0f, -5.0f, -5.0f,
		5.0f, -5.0f, -5.0f,
		5.0f, -5.0f, -5.0f,
		5.0f,  5.0f, -5.0f,
		-5.0f,  5.0f, -5.0f,

		-5.0f, -5.0f,  5.0f,
		-5.0f, -5.0f, -5.0f,
		-5.0f,  5.0f, -5.0f,
		-5.0f,  5.0f, -5.0f,
		-5.0f,  5.0f,  5.0f,
		-5.0f, -5.0f,  5.0f,

		5.0f, -5.0f, -5.0f,
		5.0f, -5.0f,  5.0f,
		5.0f,  5.0f,  5.0f,
		5.0f,  5.0f,  5.0f,
		5.0f,  5.0f, -5.0f,
		5.0f, -5.0f, -5.0f,

		-5.0f, -5.0f,  5.0f,
		-5.0f,  5.0f,  5.0f,
		5.0f,  5.0f,  5.0f,
		5.0f,  5.0f,  5.0f,
		5.0f, -5.0f,  5.0f,
		-5.0f, -5.0f,  5.0f,

		-5.0f,  5.0f, -5.0f,
		5.0f,  5.0f, -5.0f,
		5.0f,  5.0f,  5.0f,
		5.0f,  5.0f,  5.0f,
		-5.0f,  5.0f,  5.0f,
		-5.0f,  5.0f, -5.0f,

		-5.0f, -5.0f, -5.0f,
		-5.0f, -5.0f,  5.0f,
		5.0f, -5.0f, -5.0f,
		5.0f, -5.0f, -5.0f,
		-5.0f, -5.0f,  5.0f,
		5.0f, -5.0f,  5.0f
	};
	// skybox VAO
	unsigned int  skyboxVBO;
	glGenVertexArrays(1, &skyboxVAO);
	glGenBuffers(1, &skyboxVBO);
	glBindVertexArray(skyboxVAO);
	glBindBuffer(GL_ARRAY_BUFFER, skyboxVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), &skyboxVertices, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
};

void RenderSkybox(unsigned int& skyboxVAO, unsigned int& cubemapTexture) {
	glBindVertexArray(skyboxVAO);
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
	glDrawArrays(GL_TRIANGLES, 0, 36);
	glBindVertexArray(0);
};