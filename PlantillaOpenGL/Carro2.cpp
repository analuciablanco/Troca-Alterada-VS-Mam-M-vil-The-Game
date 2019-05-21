#include "stdafx.h"
#include "Carro2.h"

void Carro2::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
	modelo = rotate(modelo, (float)(angulo + PI / 2), vec3(0.0f, 1.0f, 0.0f));
}

void Carro2::mover(float tiempoDiferencial) {
	coordenadas.x += cos(anguloTrayectoria) * velocidad * tiempoDiferencial;
	coordenadas.z += sin(anguloTrayectoria) * velocidad * tiempoDiferencial;
}

void Carro2::actualizar(float tiempoDiferencial, vector<vec3> trayectoria) {
	actualizarMatrizModelo();
	mover(tiempoDiferencial);

	velocidad -= desaceleracion * tiempoDiferencial;
	if (velocidad > velocidadMaxima) {
		velocidad = velocidadMaxima;
	}
	else if (velocidad < 0) {
		velocidad = 0;
	}

	if (indicePuntoTrayectoria < 2 || (indicePuntoTrayectoria < 13 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.x >= trayectoria[indicePuntoTrayectoria + 1].x) {
			if (indicePuntoTrayectoria == 10) {
				cout << "Vueltas: " << ++contadorVuelta << " ";

			}

			if (contadorVuelta > 1) {
				velocidad = 0;
				ganador = true;
			}
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
			angulo = -anguloTrayectoria;

		}
	}
	else if (indicePuntoTrayectoria < 5 || (indicePuntoTrayectoria < 15 && indicePuntoTrayectoria >= 10)) {
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
			if (indicePuntoTrayectoria == 19) {
				indicePuntoTrayectoria = 0;
			}
			else {
				indicePuntoTrayectoria++;
			}
			calcularAnguloTrayectoria(trayectoria);
			angulo = -anguloTrayectoria;

		}

	}
}

void Carro2::calcularAnguloTrayectoria(vector<vec3> trayectoria) {
	anguloTrayectoria = atan((trayectoria[indicePuntoTrayectoria + 1].z - trayectoria[indicePuntoTrayectoria].z) /
		(trayectoria[indicePuntoTrayectoria + 1].x - trayectoria[indicePuntoTrayectoria].x));
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