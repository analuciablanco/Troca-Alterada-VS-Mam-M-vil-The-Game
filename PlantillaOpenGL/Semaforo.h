#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Semaforo : public Modelo {
public:
	bool semaforo = true;
	Semaforo();
	void actualizar();

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 25.0f, 25.0f);
}; 
