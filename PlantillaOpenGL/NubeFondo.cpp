#include "stdafx.h"
#include "NubeFondo.h"

void NubeFondo::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void NubeFondo::movimientoTeclado(int posicion)
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

NubeFondo::NubeFondo() {
	//atras
	vertices.push_back({ vec4(-6.0f,  21.0f,  -50.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-6.0f,  24.0f,  -50.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  24.0f,  -50.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  21.0f,  -50.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Enfrente
	vertices.push_back({ vec4(-6.0f,  21.0f,  -45.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-6.0f,  24.0f,  -45.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  24.0f,  -45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  21.0f,  -45.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(-6.0f,  21.0f,  -50.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-6.0f,  24.0f,  -50.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-6.0f,  24.0f,  -45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-6.0f,  21.0f,  -45.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Derecha
	vertices.push_back({ vec4(6.0f,  21.0f,  -50.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  24.0f,  -50.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  24.0f,  -45.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(6.0f,  21.0f,  -45.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube1 bola2
	//atras
	vertices.push_back({ vec4(-3.0f,  20.0f,  -55.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  25.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  25.0f,  -55.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  20.0f,  -55.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//enfrente
	vertices.push_back({ vec4(-3.0f,  20.0f,  -40.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  25.0f,  -40.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  25.0f,  -40.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  20.0f,  -40.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(-3.0f,  20.0f,  -55.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  25.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  25.0f,  -40.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  20.0f,  -40.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Derecha
	vertices.push_back({ vec4(3.0f,  20.0f,  -55.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  25.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  25.0f,  -40.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  20.0f,  -40.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Arriba
	vertices.push_back({ vec4(-3.0f,  20.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  25.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  25.0f,  -40.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  20.0f,  -40.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Nube2


	//enfrente
	vertices.push_back({ vec4(-102.0f,  21.0f,  -75.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-102.0f,  24.0f,  -75.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-92.0f,  24.0f,  -75.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-92.0f,  21.0f,  -75.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube2 bola 2
	//atras
	vertices.push_back({ vec4(-105.0f,  20.0f,  -80.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-105.0f,  24.5f,  -80.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-99.0f,  24.5,  -80.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-99.0f,  20.0f,  -80.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });


	//Nube3

	//enfrente
	vertices.push_back({ vec4(-102.0f,  -21.0f,  -85.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-102.0f,  -24.0f,  -85.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-92.0f,  -24.0f,  -85.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-92.0f,  -21.0f,  -85.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube3 bola 2
	//atras
	vertices.push_back({ vec4(-105.0f,  -22.0f,  -90.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-105.0f,  -28.0f,  -90.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-99.0f,  -28.0,  -90.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-99.0f,  -22.0f,  -90.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube 4
	//enfrente
	vertices.push_back({ vec4(102.0f,  21.0f,  -75.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(102.0f,  24.0f,  -75.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(92.0f,  24.0f,  -75.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(92.0f,  21.0f,  -75.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube2 bola 2
	//atras
	vertices.push_back({ vec4(105.0f,  20.0f,  -80.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(105.0f,  24.5f,  -80.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(99.0f,  24.5,  -80.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(99.0f,  20.0f,  -80.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube 5
	//enfrente
	vertices.push_back({ vec4(102.0f,  -21.0f,  -55.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(102.0f,  -24.0f,  -55.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(89.0f,  -24.0f,  -55.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(89.0f,  -21.0f,  -55.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Nube3 bola 2
	//atras
	vertices.push_back({ vec4(105.0f,  -23.0f,  -60.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(105.0f,  -29.0f,  -60.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(98.0f,  -29.0,  -60.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(98.0f,  -23.0f,  -60.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
}