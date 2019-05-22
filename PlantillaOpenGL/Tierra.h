#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Tierra : public Modelo {
public:
	Tierra();
	void movimientoTeclado(int posicion);

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
	float pistaR = 44.0, pistaG = 191.0, pistaB = 3.0;

};