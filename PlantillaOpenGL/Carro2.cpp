#include "stdafx.h"
#include "Carro2.h"

void Carro2::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Carro2::avanzar() {
	coordenadas.z += 0.01f;
	actualizarMatrizModelo();
}

void Carro2::movimientoTeclado(int posicion)
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

void Carro2::retroceder() {
	coordenadas.z -= 0.01f;
	coordenadas.y -= 0.01f;
	actualizarMatrizModelo();
}

void Carro2::rotar() {

}

Carro2::Carro2() {
#pragma region PARTE ABAJO CARRO
	//Rectángulo [ATRÁS]
	vertices.push_back({ vec4( -0.5f,  0.40f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f,  0.40f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [FRENTE]
	vertices.push_back({ vec4( -0.5f,  0.40f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f,  0.40f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [DERECHA]
	vertices.push_back({ vec4( -0.5f,  0.40f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f,  0.40f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [IZQUIERDA]
	vertices.push_back({ vec4(  0.5f,  0.40f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f,  0.40f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [ABAJO]
	vertices.push_back({ vec4(  0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f, -0.7f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, -0.05f,  2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
#pragma endregion

#pragma region PARTE ARRIBA CARRO
	//Figura parte arriba del carro [ATRÁS]
	vertices.push_back({ vec4( -0.5f, 0.40f, -0.5f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, 0.40f, -0.5f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.4f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.4f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [FRENTE]
	vertices.push_back({ vec4( -0.4f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.4f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [ARRIBA]
	vertices.push_back({ vec4( -0.4f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.4f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.4f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.4f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [ABAJO]
	vertices.push_back({ vec4(  0.5f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.5f, 0.40f, 2.0, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.5f, 0.40f, 2.0f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [DERECHA]
	vertices.push_back({ vec4( -0.49f, 0.40f, -0.5f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.49f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.39f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4( -0.39f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [DERECHA VENTANA 1]
	vertices.push_back({ vec4(-0.5f, 0.45f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.45f, 1.45f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.4f, 0.85f, 1.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.4f, 0.85f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [DERECHA VENTANA 2]
	vertices.push_back({ vec4(-0.5f, 0.45f, -0.4f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.45f, 0.4f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.4f, 0.85f, 0.4f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.4f, 0.85f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [IZQUIERDA]
	vertices.push_back({ vec4(  0.49f, 0.40f, -0.5f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.49f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.39f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(  0.39f, 0.90f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (0.0 * 100) / 255.0, (255.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [IZQUIERDA VENTANA 1]
	vertices.push_back({ vec4(0.5f, 0.45f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.45f, 1.45f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.4f, 0.85f, 1.1f, 1.0f),		vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.4f, 0.85f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [IZQUIERDA VENTANA 2]
	vertices.push_back({ vec4(0.5f, 0.45f, -0.4f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.45f, 0.4f, 1.0f),		vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.4f, 0.85f, 0.4f, 1.0f),		vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.4f, 0.85f, -0.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
#pragma endregion
};