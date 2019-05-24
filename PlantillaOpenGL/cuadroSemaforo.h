#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class cuadroSemaforo : public Modelo {
public:
	vec3 escala = vec3(0.0f,0.0f,0.0f);
	cuadroSemaforo(vec4 color, vec3 posicion);
	void actualizar();

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
};
