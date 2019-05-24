#include "stdafx.h"
#include "Carro.h"

void Carro::actualizarMatrizModelo() {
	vec3 escalaCarro = vec3(tamanoCarro);
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
	modelo = rotate(modelo, (float)(angulo + PI / 2), vec3(0.0f, 1.0f, 0.0f));
	modelo = scale(modelo, escalaCarro);
}

void Carro::mover(float tiempoDiferencial) {
	coordenadas.x += cos(anguloTrayectoria) * velocidad * tiempoDiferencial;
	coordenadas.z += sin(anguloTrayectoria) * velocidad * tiempoDiferencial;
	coordenadas.y += cos(anguloVertical) * velocidad * tiempoDiferencial;
}

void Carro::actualizar(float tiempoDiferencial, vector<vec3> trayectoria) {
	actualizarMatrizModelo();
	mover(tiempoDiferencial);

	velocidad -= desaceleracion * tiempoDiferencial;
	if (velocidad > velocidadMaxima) {
		velocidad = velocidadMaxima;
	}
	else if (velocidad < 0) {
		velocidad = 0;
	}


	if (indicePuntoTrayectoria == 3) {
		anguloVertical = PI / 4;
	}
	else if (indicePuntoTrayectoria == 4) {
			anguloVertical = PI / 2;
	} else if (indicePuntoTrayectoria == 5) {
		anguloVertical = PI;
	} else if (indicePuntoTrayectoria == 6) {
		anguloVertical = PI / 2;
	}

	if (indicePuntoTrayectoria < 2 || (indicePuntoTrayectoria < 13 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.x >= trayectoria[indicePuntoTrayectoria + 1].x) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
			angulo = -anguloTrayectoria;
		}
	}
	else if (indicePuntoTrayectoria < 5 || (indicePuntoTrayectoria < 15 && indicePuntoTrayectoria >= 10)){
		if (coordenadas.z <= trayectoria[indicePuntoTrayectoria + 1].z) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);

			if (indicePuntoTrayectoria == 15) {
				anguloTrayectoria -= PI;
				angulo = -anguloTrayectoria;
			}
			else {
				angulo = anguloTrayectoria + PI / 2;
				anguloTrayectoria = -anguloTrayectoria - PI / 2;
				
			}
			
		}
	} 
	else if (indicePuntoTrayectoria < 7 || (indicePuntoTrayectoria < 17 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.x <= trayectoria[indicePuntoTrayectoria + 1].x) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
			angulo = abs(anguloTrayectoria) + PI;
			anguloTrayectoria -= PI;
		}
	}
	else if (indicePuntoTrayectoria < 10 || (indicePuntoTrayectoria < 20 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.z >= trayectoria[indicePuntoTrayectoria + 1].z) {
			indicePuntoTrayectoria++;		
			calcularAnguloTrayectoria(trayectoria);
			angulo = -anguloTrayectoria; 
		}
	}
	else if (indicePuntoTrayectoria < 21) {
		if (coordenadas.x >= trayectoria[indicePuntoTrayectoria + 1].x) {
			cout << "Vueltas: " << ++contadorVuelta << " ";
			if (contadorVuelta > 1) {
				velocidad = 0;
				ganador = true;
			}
			indicePuntoTrayectoria = 0;
		}

	}
}

void Carro::calcularAnguloTrayectoria(vector<vec3> trayectoria) {
	anguloTrayectoria = atan((trayectoria[indicePuntoTrayectoria + 1].z - trayectoria[indicePuntoTrayectoria].z) /
		(trayectoria[indicePuntoTrayectoria + 1].x - trayectoria[indicePuntoTrayectoria].x));
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