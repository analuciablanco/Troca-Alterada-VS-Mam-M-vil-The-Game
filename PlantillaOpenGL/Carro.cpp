#include "stdafx.h"
#include "Carro.h"

void Carro::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
}

void Carro::avanzar() {
	coordenadas.z += 0.01f;
	actualizarMatrizModelo();
}

void Carro::retroceder() {
	coordenadas.z -= 0.01f;
	coordenadas.y -= 0.01f;
	actualizarMatrizModelo();
}

Carro::Carro() {
#pragma region PARTE ABAJO CARRO
	//Rectángulo [ATRÁS]
	vertices.push_back({ vec4(-0.5f, 0.40f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [FRENTE]
	vertices.push_back({ vec4(-0.5f, 0.40f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [DERECHA]
	vertices.push_back({ vec4(-0.5f, 0.40f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.40f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [IZQUIERDA]
	vertices.push_back({ vec4(0.5f, 0.40f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Rectángulo [ABAJO]
	vertices.push_back({ vec4(0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f, -0.7f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, -0.05f,  2.0f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
#pragma endregion

#pragma region PARTE ARRIBA CARRO
	//Figura parte arriba del carro [ATRÁS]
	vertices.push_back({ vec4(-0.5f, 0.40f, 0.5f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f, 0.5f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 0.5f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.90f, 0.5f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [ATRÁS VENTANA]
	vertices.push_back({ vec4(-0.48f, 0.52f, 0.49f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.48f, 0.52f, 0.49f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.48f, 0.88f, 0.49f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.48f, 0.88f, 0.49f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [FRENTE]
	vertices.push_back({ vec4(-0.5f, 0.90f, 1.2f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 1.2f, 1.0f),		vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f, 1.6f, 1.0f),		vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.40f, 1.6f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [ARRIBA]
	vertices.push_back({ vec4(-0.5f, 0.90f, 0.5f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 0.5f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 1.2f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.90f, 1.2f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [ABAJO]
	vertices.push_back({ vec4(0.5f, 0.40f, 1.6f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.40f, 1.6f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.40f, 2.0, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f, 2.0f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [DERECHA]
	vertices.push_back({ vec4(-0.5f, 0.40f, 0.5f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.40f, 1.6f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.90f, 1.2f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.90f, 0.5f, 1.0f),	vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [DERECHA VENTANA 1]
	vertices.push_back({ vec4(-0.52f, 0.45f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.52f, 0.45f, 1.45f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.52f, 0.85f, 1.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(-0.52f, 0.85f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [IZQUIERDA]
	vertices.push_back({ vec4(0.5f, 0.40f, 0.5f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.40f, 1.6f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 1.2f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.5f, 0.90f, 0.5f, 1.0f),		vec4((255.0 * 100) / 255.0, (0.0 * 100) / 255.0, (0.0 * 100) / 255.0, 1.0f) });

	//Figura parte arriba del carro [IZQUIERDA VENTANA 1]
	vertices.push_back({ vec4(0.52f, 0.45f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.52f, 0.45f, 1.45f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.52f, 0.85f, 1.1f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.52f, 0.85f, 0.55f, 1.0f),	vec4((0.0 * 100) / 255.0, (255.0 * 100) / 255.0, (242 * 100) / 255.0, 1.0f) });
#pragma endregion
};