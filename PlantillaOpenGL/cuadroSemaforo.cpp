#include "stdafx.h"
#include "cuadroSemaforo.h"

void cuadroSemaforo::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
	modelo = scale(modelo, escala);
}

void cuadroSemaforo::actualizar() {
	actualizarMatrizModelo();
}

cuadroSemaforo::cuadroSemaforo(vec4 color, vec3 posicion) {
	this->coordenadas = posicion;


#pragma region Rectangulo Amarillo

	//Cuadrado adelante
	vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),color });
	//Cuadrado costado izquierdo
	vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(-1.9f, -1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),color });
	//Cuadrado costado derecho
	vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, -1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),color });
	//Cuadrado costado arriba
	vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),color });
	vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),color });
	vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),color });
#pragma endregion
}
