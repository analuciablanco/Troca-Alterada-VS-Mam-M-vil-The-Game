#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class NubeFondo : public Modelo {
public:
	NubeFondo();
	void movimientoTeclado(int posicion);

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
	float pistaR = 255.0, pistaG = 255.0, pistaB = 255.0;
	float pistaR2 = 179, pistaG2 = 213, pistaB2 = 242;

};