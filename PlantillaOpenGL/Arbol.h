#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Arbol : public Modelo {
public:
	Arbol();
	void movimientoTeclado(int posicion);

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
	float pistaR = 104.0, pistaG = 64.0, pistaB = 12.0;
	float pistaR1 = 3.0, pistaG1 = 61.0, pistaB1 = 20.0;
	float pistaR2 = 4.0, pistaG2 = 86.0, pistaB2 = 29.0;
	float pistaR3 = 11.0, pistaG3 = 112.0, pistaB3 = 41.0;
	float pistaR4 = 66.0, pistaG4 = 137.0, pistaB4 = 87.0;
};