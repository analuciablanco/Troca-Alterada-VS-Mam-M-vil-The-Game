#include "stdafx.h"
#include "Pista.h"

void Pista::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Pista::avanzar() {
	coordenadas.z += 0.01f;
	actualizarMatrizModelo();
}

void Pista::retroceder() {
	coordenadas.z -= 0.01f;
	coordenadas.y -= 0.01f;
	actualizarMatrizModelo();
}


Pista::Pista()
{
#pragma region PISTA
	// Tamaño BASE
	//vertices.push_back({ vec4(40.0f,  -0.05f,  25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	//vertices.push_back({ vec4(40.0f,  -0.05f,  -25.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	//vertices.push_back({ vec4(-40.0f,  -0.05f,  -25.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	//vertices.push_back({ vec4(-40.0f,  -0.05f,  25.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P1
	vertices.push_back({ vec4(30.0f,  0.0f,  -15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  0.0f,  -15.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P2
	vertices.push_back({ vec4(-24.0f,  0.0f,  -15.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P3
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P4
	vertices.push_back({ vec4(-30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P5
	vertices.push_back({ vec4(-24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P6
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P7
	vertices.push_back({ vec4(30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P8
	vertices.push_back({ vec4(30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(32.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -12.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P9
	vertices.push_back({ vec4(32.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -12.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(22.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -22.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P10
	vertices.push_back({ vec4(22.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -22.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//P11
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -25.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P12
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -25.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  -19.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P13
	vertices.push_back({ vec4(-40.0f,  0.0f,  -19.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P14
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P15
	vertices.push_back({ vec4(35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P16
	vertices.push_back({ vec4(35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P17
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  -19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P18
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  -19.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//P19
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(65.0 / 255.0, 80.0 / 255.0, 104.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  -15.0f, 1.0f),		vec4(65.0 / 255.0, 80.0 / 255.0, 104.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(32.0f,  0.0f,  -17.0f, 1.0f),		vec4(65.0 / 255.0, 80.0 / 255.0, 104.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(65.0 / 255.0, 80.0 / 255.0, 104.0 / 255.0, 1.0f) });
#pragma endregion

#pragma region META
	//BASE
	vertices.push_back({ vec4(-2.0f,  0.001f,  15.0f, 1.0f),	vec4(0.0 / 255.0, 0.0 / 255.0, 0.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.001f,  15.0f, 1.0f),		vec4(0.0 / 255.0, 0.0 / 255.0, 0.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.001f,  25.0f, 1.0f),		vec4(0.0 / 255.0, 0.0 / 255.0, 0.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.001f,  25.0f, 1.0f),	vec4(0.0 / 255.0, 0.0 / 255.0, 0.0 / 255.0, 1.0f) });

	vertices.push_back({ vec4(-2.0f,  0.002f,  15.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  15.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.002f,  17.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });

	vertices.push_back({ vec4(2.0f,  0.002f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.002f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });

	vertices.push_back({ vec4(-2.0f,  0.002f,  21.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.002f,  19.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });

	vertices.push_back({ vec4(2.0f,  0.002f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.002f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });

	vertices.push_back({ vec4(-2.0f,  0.002f,  23.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.002f,  25.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.002f,  25.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
#pragma endregion


}