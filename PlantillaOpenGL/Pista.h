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
	float pistaR = 121.0f, pistaG = 122.0f, pistaB = 124.0f;
	float bordeR = 248.0f, bordeG = 255.0f, bordeB = 130.0f;
};
