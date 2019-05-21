#include "stdafx.h"
#include "Carro.h"

void Carro::actualizarMatrizModelo() {
	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
	modelo = rotate(modelo, angulo, vec3(0.0f, 1.0f, 0.0f));
}

void Carro::mover(float tiempoDiferencial) {
	coordenadas.x += cos(anguloTrayectoria) * velocidad * tiempoDiferencial;
	coordenadas.z += sin(anguloTrayectoria) * velocidad * tiempoDiferencial;
}

void Carro::actualizar(float tiempoDiferencial, vector<vec3> trayectoria) {
	actualizarMatrizModelo();
	mover(tiempoDiferencial);

	if (indicePuntoTrayectoria < 2 || (indicePuntoTrayectoria < 13 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.x >= trayectoria[indicePuntoTrayectoria + 1].x) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
		}
	}
	else if (indicePuntoTrayectoria < 5 || (indicePuntoTrayectoria < 15 && indicePuntoTrayectoria >= 10)){
		if (coordenadas.z <= trayectoria[indicePuntoTrayectoria + 1].z) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
			
			if (indicePuntoTrayectoria == 15) {
				anguloTrayectoria -= PI;
			}
			else {
				anguloTrayectoria = -anguloTrayectoria - PI / 2;
			}
		}
	} 
	else if (indicePuntoTrayectoria < 7 || (indicePuntoTrayectoria < 17 && indicePuntoTrayectoria >= 10)) {
		if (coordenadas.x <= trayectoria[indicePuntoTrayectoria + 1].x) {
			indicePuntoTrayectoria++;
			calcularAnguloTrayectoria(trayectoria);
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
		}
	}
}

void Carro::calcularAnguloTrayectoria(vector<vec3> trayectoria) {
	anguloTrayectoria = atan((trayectoria[indicePuntoTrayectoria + 1].z - trayectoria[indicePuntoTrayectoria].z) /
		(trayectoria[indicePuntoTrayectoria + 1].x - trayectoria[indicePuntoTrayectoria].x));
	angulo += anguloTrayectoria;
	cout << trayectoria[indicePuntoTrayectoria].x << " " << trayectoria[indicePuntoTrayectoria].z << " " << anguloTrayectoria << "\n";
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