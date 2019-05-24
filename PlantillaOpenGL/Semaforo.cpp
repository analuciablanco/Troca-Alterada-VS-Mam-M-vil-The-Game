#include "stdafx.h"
#include "Semaforo.h"

void Semaforo::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Semaforo::actualizar(){
	actualizarMatrizModelo();
}


Semaforo::Semaforo() {
	

#pragma region Rectangulo gris base

	//Cuadrado adelante
	vertices.push_back({ vec4(6.9f, 2.2f,  1.0f, 1.0f),vec4(0.4f,0.4f,0.4f,1.0f) });
	vertices.push_back({ vec4(-6.9f, 2.2f,  1.0f, 1.0f),vec4(0.4f,0.4f,0.4f,1.0f) });
	vertices.push_back({ vec4(-6.9f, -2.2f, 1.0f, 1.0f),vec4(0.4f,0.4f,0.4f,1.0f) });
	vertices.push_back({ vec4(6.9f, -2.2f, 1.0f, 1.0f),vec4(0.4f,0.4f,0.4f,1.0f) });

	//Cuadrado costado derecho
	vertices.push_back({ vec4(-6.9f, 2.2f, -0.7f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(-6.9f, -2.2f, -0.7f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(-6.9f, -2.2f,  1.0f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(-6.9f, 2.2f,  1.0f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });

	//Cuadrado costado izq
	vertices.push_back({ vec4(6.9f, 2.2f, -0.7f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(6.9f, -2.2f, -0.7f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(6.9f, -2.2f,  1.0f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });
	vertices.push_back({ vec4(6.9f, 2.2f,  1.0f, 1.0f),vec4(0.0f,0.0f,0.0f,1.0f) });

	//Cuadrado arriba
	vertices.push_back({ vec4(6.9f, 2.2f,  1.0f, 1.0f),vec4(0.2f,0.2f,0.2f,1.0f) });
	vertices.push_back({ vec4(6.9f, 2.2f,  -0.7f, 1.0f),vec4(0.2f,0.2f,0.2f,1.0f) });
	vertices.push_back({ vec4(-6.9f, 2.2f, -0.7f, 1.0f),vec4(0.2f,0.2f,0.2f,1.0f) });
	vertices.push_back({ vec4(-6.9f, 2.2f, 1.0f, 1.0f),vec4(0.2f,0.2f,0.2f,1.0f) });
#pragma endregion
	
	/*
#pragma region Rectangulo Amarillo

		//Cuadrado adelante
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,1.0f,0.0f,1.0f) });
		//Cuadrado costado izquierdo
		vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f, -0.7f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		//Cuadrado costado derecho
		vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f, -0.7f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.5f,0.0f,1.0f) });
		//Cuadrado costado arriba
		vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),vec4(1.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),vec4(1.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.8f,0.0f,1.0f) });
#pragma endregion
		
	
	if (acum >= 0 && acum <= 2) {
#pragma region Rectangulo verde

		//Cuadrado adelante
		vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, -1.9f,  2.0f, 1.0f),vec4(0.0f,1.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(-5.9f, -1.9f,  2.0f, 1.0f),vec4(0.0f,1.0f,0.0f,1.0f) });
		//Cuadrado costado izquierdo
		vertices.push_back({ vec4(-2.9f, 1.9f, -0.7f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, -1.9f, -0.7f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, -1.9f,  2.0f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });

		//Cuadrado costado derecho
		vertices.push_back({ vec4(-5.9f, 1.9f, -0.7f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-5.9f, -1.9f, -0.7f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-5.9f, -1.9f,  2.0f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });
		vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,0.5f,0.0f,1.0f) });

		//Cuadrado costado arriba
		vertices.push_back({ vec4(-5.9f, 1.9f, -0.7f, 1.0f),vec4(0.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, 1.9f, -0.7f, 1.0f),vec4(0.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,0.8f,0.0f,1.0f) });
		vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.0f,0.8f,0.0f,1.0f) });
#pragma endregion
	}

	if (acum >= 5 && acum <= 6) {
#pragma region Retangulo rojo

		//Cuadrado adelante
		vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(1.0f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(5.9f, -1.9f,  2.0f, 1.0f),vec4(1.0f,0.0f,0.0f,1.0f) });
		//Cuadrado costado izquierdo
		vertices.push_back({ vec4(5.9f, 1.9f, -0.7f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(5.9f, -1.9f, -0.7f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(5.9f, -1.9f,  2.0f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		//Cuadrado costado derecho
		vertices.push_back({ vec4(2.9f, 1.9f, -0.7f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, -1.9f, -0.7f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, -1.9f,  2.0f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(0.5f,0.0f,0.0f,1.0f) });
		//Cuadrado costado arriba
		vertices.push_back({ vec4(5.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.0f,0.0f,1.0f) });
		vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.0f,0.0f,1.0f) });

#pragma endregion
	}*/

#pragma region Rectangulo Gris Amarillo
		
		//Cuadrado adelante
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
		//Cuadrado costado izquierdo
		vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(-1.9f, -1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		//Cuadrado costado derecho
		vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(1.9f, -1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
		//Cuadrado costado arriba
		vertices.push_back({ vec4(-1.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.f,0.8f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
		vertices.push_back({ vec4(1.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
		vertices.push_back({ vec4(-1.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
#pragma endregion

#pragma region Rectangulo Gris verde

	//Cuadrado adelante
	vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(-2.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(-5.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	//Cuadrado costado izquierdo
	vertices.push_back({ vec4(-2.9f, 1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-2.9f, -1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-2.9f, -1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });

	//Cuadrado costado derecho
	vertices.push_back({ vec4(-5.9f, 1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-5.9f, -1.9f, -0.7f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-5.9f, -1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });
	vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.7f,0.7f,0.7f,1.0f) });

	//Cuadrado costado arriba
	vertices.push_back({ vec4(-5.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(-2.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(-2.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(-5.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
#pragma endregion

#pragma region Retangulo Gris rojo

	//Cuadrado adelante
	vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(2.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	vertices.push_back({ vec4(5.9f, -1.9f,  2.0f, 1.0f),vec4(0.9f,0.9f,0.9f,1.0f) });
	//Cuadrado costado izquierdo
	vertices.push_back({ vec4(5.9f, 1.9f, -0.7f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(5.9f, -1.9f, -0.7f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(5.9f, -1.9f,  2.0f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	//Cuadrado costado derecho
	vertices.push_back({ vec4(2.9f, 1.9f, -0.7f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(2.9f, -1.9f, -0.7f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(2.9f, -1.9f,  2.0f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(0.6f,0.6f,0.6f,1.0f) });
	//Cuadrado costado arriba
	vertices.push_back({ vec4(5.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(2.9f, 1.9f, -0.7f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(2.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });
	vertices.push_back({ vec4(5.9f, 1.9f,  2.0f, 1.0f),vec4(0.8f,0.8f,0.8f,1.0f) });

#pragma endregion


}