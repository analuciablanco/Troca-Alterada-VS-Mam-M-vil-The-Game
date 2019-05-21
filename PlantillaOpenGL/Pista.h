#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Pista : public Modelo {
public:
	Pista();
	void avanzar();
	void retroceder();

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
	float pistaR = 121.0, pistaG = 122.0, pistaB = 124.0;
	float pistaR2 = 96.0, pistaG2 = 96.0, pistaB2 = 96.0;
};
