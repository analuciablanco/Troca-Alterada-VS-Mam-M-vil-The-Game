#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Carro : public Modelo {
public:
	int indicePuntoTrayectoria = 0;
	float angulo = PI / 2;
	float anguloTrayectoria = 0;
	float velocidad = 25;
	float velocidadMaxima = 5;
	float desaceleracion = 0;
	float aceleracion = 1;

	Carro();
	void mover(float tiempoDiferencial);
	void actualizar(float tiempoDiferencial, vector<vec3> trayectoria);
	void calcularAnguloTrayectoria(vector<vec3> trayectoria);

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.1f, 18.0f);
};