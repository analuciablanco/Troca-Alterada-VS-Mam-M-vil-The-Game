#include "stdafx.h"
#include "Nube.h"

void Nube::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Nube::movimientoTeclado(int posicion)
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

Nube::Nube() {
	//atras
	vertices.push_back({ vec4(10.0f,  21.0f,  -3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  24.0f,  -3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  -3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  21.0f,  -3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Frente
	vertices.push_back({ vec4(10.0f,  21.0f,  3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  24.0f,  3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  21.0f,  3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(10.0f,  21.0f,  3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  24.0f,  3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  24.0f,  -3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  21.0f,  -3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//derecha
	vertices.push_back({ vec4(21.0f,  21.0f,  3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  -3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  21.0f,  -3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//abajo
	vertices.push_back({ vec4(10.0f,  21.0f,  3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  21.0f,  3.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  21.0f,  -3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  21.0f,  -3.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//arriba
	vertices.push_back({ vec4(10.0f,  24.0f,  -3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  -3.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  24.0f,  3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  24.0f,  3.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//bola 2
	//atras
	vertices.push_back({ vec4(12.75f,  20.0f,  -6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  25.0f,  -6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  -6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  20.0f,  -6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//enfrente
	vertices.push_back({ vec4(12.75f,  20.0f,  6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  25.0f,  6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  20.0f,  6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(12.75f,  20.0f,  -6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  25.0f,  -6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  25.0f,  6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  20.0f,  6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//derecha
	vertices.push_back({ vec4(18.25f,  20.0f,  -6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  -6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  20.0f,  6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//arriba
	vertices.push_back({ vec4(12.75f,  25.0f,  -6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  25.0f,  6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  25.0f,  -6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//abajo
	vertices.push_back({ vec4(12.75f,  20.0f,  -6.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.75f,  20.0f,  6.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  20.0f,  6.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(18.25f,  20.0f,  -6.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });



	//Nube 2
	//atras
	vertices.push_back({ vec4(-19.0f,  19.0f,  2.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  21.0f,  2.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  2.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  19.0f,  2.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Frente
	vertices.push_back({ vec4(-19.0f,  19.0f,  7.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  21.0f,  7.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  7.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  19.0f,  7.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(-19.0f,  19.0f,  2.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  21.0f,  2.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  7.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  19.0f,  7.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//derecha
	vertices.push_back({ vec4(-10.0f,  19.0f,  2.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  2.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  7.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  19.0f,  7.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//abajo
	vertices.push_back({ vec4(-19.0f,  19.0f,  2.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  19.0f,  7.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  19.0f,  7.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  19.0f,  2.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//arriba
	vertices.push_back({ vec4(-19.0f,  21.0f,  2.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-19.0f,  21.0f,  7.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  7.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-10.0f,  21.0f,  2.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Nube 2 Bola 2
	//atras
	vertices.push_back({ vec4(-16.75f,  18.5f,  0.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  21.5f,  0.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  0.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  18.5f,  0.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Enfrente
	vertices.push_back({ vec4(-16.75f,  18.5f,  9.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  21.5f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  9.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  18.5f,  9.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//izquierda
	vertices.push_back({ vec4(-16.75f,  18.5f,  0.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f, 21.5f,  0.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  21.5f,  9.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  18.5f,  9.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Derecha
	vertices.push_back({ vec4(-12.25f,  18.5f,  0.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  0.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  9.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  18.5f,  9.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//abajo
	vertices.push_back({ vec4(-16.75f,  18.5f,  9.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  18.5f,  0.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  18.5f,  0.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  18.5f,  9.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Arriba
	vertices.push_back({ vec4(-16.75f,  21.5f,  9.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-16.75f,  21.5f,  0.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  0.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-12.25f,  21.5f,  9.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

}