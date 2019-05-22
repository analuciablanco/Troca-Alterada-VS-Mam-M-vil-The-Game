#include "stdafx.h"
#include "Pista.h"

void Pista::avanzar() {
	coordenadas.z += 0.01f;
}

void Pista::retroceder() {
	coordenadas.z -= 0.01f;
	coordenadas.y -= 0.01f;
}

Pista::Pista()
{
#pragma region PISTA
	//P1
	vertices.push_back({ vec4(30.0f,  0.0f,  -15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  0.0f,  -15.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P2
	vertices.push_back({ vec4(-24.0f,  0.0f,  -15.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P3
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P4
	vertices.push_back({ vec4(-30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P5
	vertices.push_back({ vec4(-24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P6
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  15.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P7
	vertices.push_back({ vec4(30.0f,  0.0f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  -9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P8
	vertices.push_back({ vec4(30.0f,  0.0f,  -9.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(32.0f,  3.0f,  -17.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -12.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P9
	vertices.push_back({ vec4(32.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -12.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(22.0f,  3.0f,  -17.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -22.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P10
	vertices.push_back({ vec4(22.0f,  3.0f,  -17.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(27.0f,  3.0f,  -22.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(142.0 / 255.0, 142.0 / 255.0, 142.0 / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P11
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -25.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P12
	vertices.push_back({ vec4(-30.0f,  0.0f,  -20.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -25.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  -19.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P13
	vertices.push_back({ vec4(-40.0f,  0.0f,  -19.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  -14.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P14
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P15
	vertices.push_back({ vec4(35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P16
	vertices.push_back({ vec4(35.0f,  0.0f,  25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  20.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P17
	vertices.push_back({ vec4(35.0f,  0.0f,  14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  -19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P18
	vertices.push_back({ vec4(35.0f,  0.0f,  -14.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  0.0f,  -19.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	//P19
	vertices.push_back({ vec4(19.0f,  0.0f,  -20.0f, 1.0f),		vec4(96.0 / 255.0, 96.0 / 255.0, 96.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  0.0f,  -15.0f, 1.0f),		vec4(96.0 / 255.0, 96.0 / 255.0, 96.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(32.0f,  0.0f,  -17.0f, 1.0f),		vec4(96.0 / 255.0, 96.0 / 255.0, 96.0 / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  0.0f,  -25.0f, 1.0f),		vec4(96.0 / 255.0, 96.0 / 255.0, 96.0 / 255.0, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

#pragma endregion

#pragma region META
	vertices.push_back({ vec4(-2.0f,  0.01f,  15.0f, 1.0f),	vec4(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.01f,  15.0f, 1.0f),		vec4(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.01f,  25.0f, 1.0f),		vec4(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.01f,  25.0f, 1.0f),	vec4(0.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 1.0f) });

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 0.0f));
	mapaUV.push_back(vec2(30.0f, 30.0f));
	mapaUV.push_back(vec2(0.0f, 30.0f));

	/* vertices.push_back({ vec4(-2.0f,  0.02f,  15.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  15.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.02f,  17.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.02f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.02f,  17.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.02f,  21.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  19.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.02f,  19.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.02f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  21.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(2.0f,  0.02f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.02f,  23.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  23.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(0.0f,  0.02f,  25.0f, 1.0f),		vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  0.02f,  25.0f, 1.0f),	vec4(1.0f, 1.0f, 1.0f, 1.0f) }); */
#pragma endregion

#pragma region BORDE EXTERNO
	vertices.push_back({ vec4(-40.0f,  1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  -1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(-40.0f,  1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  -1.0f,  19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  -1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(-40.0f,  1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-40.0f,  -1.0f,  19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(35.0f,  1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(35.0f,  1.0f,  -25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(40.0f,  1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  -1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  -1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  1.0f,  -19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(40.0f,  1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  -1.0f,  19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  1.0f,  25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(40.0f,  1.0f,  -19.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(40.0f,  -1.0f,  -19.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  -25.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  1.0f,  -25.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
#pragma endregion

#pragma region BORDE INTERNO
	vertices.push_back({ vec4(-24.0f,  1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  -1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  -9.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(-24.0f,  1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  -1.0f,  15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(24.0f,  1.0f,  -15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  -1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  -1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(24.0f,  1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  -1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  -1.0f,  15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-24.0f,  1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(-30.0f,  1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  -9.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(30.0f,  1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(24.0f,  1.0f,  -15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  -1.0f,  -15.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  1.0f,  -9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(24.0f,  1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(24.0f,  -1.0f,  15.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  1.0f,  9.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
#pragma endregion

#pragma region BORDE INTERMEDIO
	vertices.push_back({ vec4(-35.0f,  1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(35.0f,  1.0f,  -14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(19.0f,  1.0f,  -20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  -1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f, -1.0f, 20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	//

	vertices.push_back({ vec4(29.0f,  1.0f,  20.5f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-29.0f, 1.0f, 20.5f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	//

	vertices.push_back({ vec4(-30.0f,  1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(30.0f,  1.0f,  -20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  -20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  -14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  1.0f,  -14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(-30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-30.0f,  -1.0f,  20.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  -1.0f,  14.0f, 1.0f),	vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-35.0f,  1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });

	vertices.push_back({ vec4(30.0f,  1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(30.0f,  -1.0f,  20.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  -1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
	vertices.push_back({ vec4(35.0f,  1.0f,  14.0f, 1.0f),		vec4(bordeR / 255.0, bordeG / 255.0, bordeB / 255.0, 1.0f) });
#pragma endregion

}