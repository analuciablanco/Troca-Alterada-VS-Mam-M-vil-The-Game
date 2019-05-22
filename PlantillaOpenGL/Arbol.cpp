#include "stdafx.h"
#include "Arbol.h"

void Arbol::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Arbol::movimientoTeclado(int posicion)
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

Arbol::Arbol() {
	//Tronco(atras)
	vertices.push_back({ vec4(-0.8f,  0.0f,  -1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.8f,  8.0f,  -1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  8.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  0.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(enfrente)
	vertices.push_back({ vec4(-0.8f,  0.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.8f,  8.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  8.0f,  1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  0.0f,  1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado izquierdo)
	vertices.push_back({ vec4(-0.8f,  0.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.8f,  8.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.8f,  8.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.8f,  0.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado derecho)
	vertices.push_back({ vec4(0.8f,  0.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  8.0f,  1.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  8.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.8f,  0.0f,  -1.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });



	//Hojas (base1 - atras)
	vertices.push_back({ vec4(-5.0f,  7.0f,  -5.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  11.0f,  -5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f,  -5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  7.0f,  -5.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base1 - frente)
	vertices.push_back({ vec4(-5.0f,  7.0f,  5.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  11.0f, 5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f, 5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  7.0f, 5.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (lado izquierdo)
	vertices.push_back({ vec4(-5.0f,  7.0f,  5.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  11.0f, 5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  11.0f, -5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  7.0f, -5.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (lado derecho)
	vertices.push_back({ vec4(5.0f,  7.0f,  5.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f, 5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f, -5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  7.0f, -5.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (abajo)
	vertices.push_back({ vec4(-5.0f,  7.0f,  -5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  7.0f, 5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  7.0f, 5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  7.0f, -5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//hojas base 1 (arriba)
	vertices.push_back({ vec4(-5.0f,  11.0f,  -5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  11.0f, 5.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f, 5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  11.0f, -5.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });


	//Hojas base 2 (atras)
	vertices.push_back({ vec4(-3.5f,  11.0f,  -3.5f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  13.0f,  -3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  -3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  11.0f,  -3.5f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (frente)
	vertices.push_back({ vec4(-3.5f,  11.0f,  3.5f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  13.0f,  3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  11.0f,  3.5f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (derecha)
	vertices.push_back({ vec4(3.5f,  11.0f,  3.5f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  -3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  11.0f,  -3.5f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(-3.5f,  11.0f,  3.5f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  13.0f,  3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  13.0f,  -3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  11.0f,  -3.5f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (arriba)
	vertices.push_back({ vec4(-3.5f,  13.0f,  -3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.5f,  13.0f,  3.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.5f,  13.0f,  -3.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (atras)
	vertices.push_back({ vec4(-1.5f,  13.0f,  -1.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  15.0f,  -1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  -1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  13.0f,  -1.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (enfrente)
	vertices.push_back({ vec4(-1.5f,  13.0f,  1.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  15.0f,  1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  13.0f,  1.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (izquierdo)
	vertices.push_back({ vec4(-1.5f,  13.0f,  1.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  15.0f,  1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  15.0f,  -1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  13.0f,  -1.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (derecho)
	vertices.push_back({ vec4(1.5f,  13.0f,  1.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  -1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  13.0f,  -1.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (arriba)
	vertices.push_back({ vec4(-1.5f,  15.0f,  1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.5f,  15.0f,  -1.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  -1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.5f,  15.0f,  1.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });

	//ArbolEzquinaIzqSup
	//Tronco(atras)
	vertices.push_back({ vec4(-48.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  -31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  -31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(Enfrente)
	vertices.push_back({ vec4(-48.0f,  0.0f,  -29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  -29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado izquierdo)
	vertices.push_back({ vec4(-48.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado derecho)
	vertices.push_back({ vec4(-45.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Hojas (base1 - atras)
	vertices.push_back({ vec4(-51.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  -33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  -33.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - frente)
	vertices.push_back({ vec4(-51.0f,  4.0f,  -27.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  -27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - izquierda)
	vertices.push_back({ vec4(-51.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base1 - derecha)
	vertices.push_back({ vec4(-42.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (arriba)
	vertices.push_back({ vec4(-51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  -27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,   7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,   7.0f,  -33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (atras)
	vertices.push_back({ vec4(-49.0f,  6.0f,  -31.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  -31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (frente)
	vertices.push_back({ vec4(-49.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -28.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  -28.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(-49.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(-44.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (arriba)
	vertices.push_back({ vec4(-49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  -31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  -28.0, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (atras)
	vertices.push_back({ vec4(-48.0f,  8.0f,  -30.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  -30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (Frente)
	vertices.push_back({ vec4(-48.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  -28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  8.0f,  -28.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (izquierda)
	vertices.push_back({ vec4(-48.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (derecha)
	vertices.push_back({ vec4(-45.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.5f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (arriba)
	vertices.push_back({ vec4(-45.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  -30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.5f,  10.0f,  -28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });



	//ArbolEzquinaIzqInf
	//Tronco(atras)
	vertices.push_back({ vec4(-48.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(Enfrente)
	vertices.push_back({ vec4(-48.0f,  0.0f,  29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado izquierdo)
	vertices.push_back({ vec4(-48.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado derecho)
	vertices.push_back({ vec4(-45.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Hojas (base1 - atras)
	vertices.push_back({ vec4(-51.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  33.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - frente)
	vertices.push_back({ vec4(-51.0f,  4.0f,  27.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - izquierda)
	vertices.push_back({ vec4(-51.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base1 - derecha)
	vertices.push_back({ vec4(-42.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (arriba)
	vertices.push_back({ vec4(-51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-51.0f,  7.0f,  27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,   7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-42.0f,   7.0f,  33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (atras)
	vertices.push_back({ vec4(-49.0f,  6.0f,  31.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (frente)
	vertices.push_back({ vec4(-49.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  28.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  28.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(-49.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(-44.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (arriba)
	vertices.push_back({ vec4(-49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-49.0f,  9.0f,  31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-44.0f,  9.0f,  28.0, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (atras)
	vertices.push_back({ vec4(-48.0f,  8.0f,  30.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f, 30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f, 30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (Frente)
	vertices.push_back({ vec4(-48.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  8.0f,  28.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (izquierda)
	vertices.push_back({ vec4(-48.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f, 28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f, 30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (derecha)
	vertices.push_back({ vec4(-45.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.5f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (arriba)
	vertices.push_back({ vec4(-45.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-45.0f,  10.0f,  30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.0f,  10.0f,  30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-48.5f,  10.0f,  28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });


	//ArbolEzquinaDerSup
	//Tronco(atras)
	vertices.push_back({ vec4(48.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  -31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  -31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(Enfrente)
	vertices.push_back({ vec4(48.0f,  0.0f,  -29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  -29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado izquierdo)
	vertices.push_back({ vec4(48.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado derecho)
	vertices.push_back({ vec4(45.0f,  0.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  -31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  -29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Hojas (base1 - atras)
	vertices.push_back({ vec4(51.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  -33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  -33.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - frente)
	vertices.push_back({ vec4(51.0f,  4.0f,  -27.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  -27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - izquierda)
	vertices.push_back({ vec4(51.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base1 - derecha)
	vertices.push_back({ vec4(42.0f,  4.0f,  -33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  -27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (arriba)
	vertices.push_back({ vec4(51.0f,  7.0f,  -33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  -27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,   7.0f,  -27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,   7.0f,  -33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (atras)
	vertices.push_back({ vec4(49.0f,  6.0f,  -31.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  -31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (frente)
	vertices.push_back({ vec4(49.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -28.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  -28.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(49.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(44.0f,  6.0f,  -28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  -31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (arriba)
	vertices.push_back({ vec4(49.0f,  9.0f,  -28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  -31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  -28.0, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (atras)
	vertices.push_back({ vec4(48.0f,  8.0f,  -30.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  -30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (Frente)
	vertices.push_back({ vec4(48.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  -28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  8.0f,  -28.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (izquierda)
	vertices.push_back({ vec4(48.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (derecha)
	vertices.push_back({ vec4(45.0f,  8.0f,  -28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.5f,  8.0f,  -30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (arriba)
	vertices.push_back({ vec4(45.0f,  10.0f,  -28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  -30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  -30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.5f,  10.0f,  -28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });



	//ArbolEzquinaIzqInf
	//Tronco(atras)
	vertices.push_back({ vec4(48.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  31.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(Enfrente)
	vertices.push_back({ vec4(48.0f,  0.0f,  29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  29.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado izquierdo)
	vertices.push_back({ vec4(48.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Tronco(lado derecho)
	vertices.push_back({ vec4(45.0f,  0.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  31.0f, 1.0f),		vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  5.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  0.0f,  29.0f, 1.0f),	vec4(pistaR / 255.0, pistaG / 255.0, pistaB / 255.0, 1.0f) });

	//Hojas (base1 - atras)
	vertices.push_back({ vec4(51.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  33.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - frente)
	vertices.push_back({ vec4(51.0f,  4.0f,  27.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base 1 - izquierda)
	vertices.push_back({ vec4(51.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//Hojas (base1 - derecha)
	vertices.push_back({ vec4(42.0f,  4.0f,  33.0f, 1.0f),		vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,  4.0f,  27.0f, 1.0f),	vec4(pistaR1 / 255.0, pistaG1 / 255.0, pistaB1 / 255.0, 1.0f) });

	//hojas base 1 (arriba)
	vertices.push_back({ vec4(51.0f,  7.0f,  33.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(51.0f,  7.0f,  27.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,   7.0f,  27.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(42.0f,   7.0f,  33.0f, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (atras)
	vertices.push_back({ vec4(49.0f,  6.0f,  31.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (frente)
	vertices.push_back({ vec4(49.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  28.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  28.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(49.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (izquierda)
	vertices.push_back({ vec4(44.0f,  6.0f,  28.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  6.0f,  31.0, 1.0f),	vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Hojas base 2 (arriba)
	vertices.push_back({ vec4(49.0f,  9.0f,  28.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(49.0f,  9.0f,  31.0f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  31.0f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(44.0f,  9.0f,  28.0, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (atras)
	vertices.push_back({ vec4(48.0f,  8.0f,  30.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f, 30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f, 30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (Frente)
	vertices.push_back({ vec4(48.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  8.0f,  28.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (izquierda)
	vertices.push_back({ vec4(48.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f, 28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f, 30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (derecha)
	vertices.push_back({ vec4(45.0f,  8.0f,  28.5f, 1.0f),		vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.5f,  8.0f,  30.5f, 1.0f),	vec4(pistaR3 / 255.0, pistaG3 / 255.0, pistaB3 / 255.0, 1.0f) });

	//Hojas base 3 (arriba)
	vertices.push_back({ vec4(45.0f,  10.0f,  28.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(45.0f,  10.0f,  30.5f, 1.0f),		vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.0f,  10.0f,  30.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
	vertices.push_back({ vec4(48.5f,  10.0f,  28.5f, 1.0f),	vec4(pistaR4 / 255.0, pistaG4 / 255.0, pistaB4 / 255.0, 1.0f) });
}