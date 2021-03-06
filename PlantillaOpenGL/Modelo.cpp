#include "stdafx.h"
#include "Modelo.h"

Modelo::Modelo() {
	//Establecer tranformaciones con una matriz identidad.
	modelo = mat4(1.0f);
}

void Modelo::inicializarVertexArray(GLuint posicionID, GLuint colorID, GLuint modeloID,
	GLuint vistaID, GLuint proyeccionID, GLuint uvID, GLuint samplerImagenID, GLuint texturaID) {

	this->modeloID = modeloID;
	this->texturaID = texturaID;
	this->vistaID = vistaID;
	this->proyeccionID = proyeccionID;
	this->samplerImagenID = samplerImagenID;

	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayID);
	glBindVertexArray(vertexArrayID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferID);
	//llenar el buffer
	glBufferData(GL_ARRAY_BUFFER,
		sizeof(Vertice) * vertices.size(),
		vertices.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 4, GL_FLOAT,
		GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT,
		GL_FALSE, sizeof(Vertice), (void*)sizeof(vec4));

	glGenBuffers(1, &uvBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, uvBufferID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vec2) * mapaUV.size(),
		mapaUV.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(uvID);
	glVertexAttribPointer(uvID, 2, GL_FLOAT,
		GL_FALSE, sizeof(vec2), 0);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texturaID);
	glUniform1i(samplerImagenID, 0);

	//Soltarlos
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

}

void Modelo::dibujar(GLenum modoDibujo) {
	shader->enlazar();

	glBindVertexArray(vertexArrayID);

	glUniformMatrix4fv(modeloID, 1, GL_FALSE, &modelo[0][0]);
	glUniformMatrix4fv(vistaID, 1, GL_FALSE, &vista[0][0]);
	glUniformMatrix4fv(proyeccionID, 1, GL_FALSE, &proyeccion[0][0]);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texturaID);
	glUniform1i(samplerImagenID, 0);

	glDrawArrays(modoDibujo, 0, vertices.size());
	glBindVertexArray(0);

	shader->desenlazar();
}