#include "stdafx.h"
#include "Tierra.h"

void Tierra::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Tierra::movimientoTeclado(int posicion)
{
	if (posicion == 1)
	{
		coordenadas.x -= 0.01f;
	}
	else if (posicion == 2)
	{
		coordenadas.x += 0.01f;
	}
	else if (posicion == 3)
	{
		coordenadas.z += 0.01f;
	}
	else if (posicion == 4)
	{
		coordenadas.z -= 0.01f;
	}

	actualizarMatrizModelo();
}

Tierra::Tierra() {
	//Tierra
	vertices.push_back({ vec4(-60.0f,  -0.01f,  -45.0f, 1.0f),vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-60.0f,  -0.01f,  45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(60.0f,  -0.01f,  45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(60.0f,  -0.01f,  -45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

}