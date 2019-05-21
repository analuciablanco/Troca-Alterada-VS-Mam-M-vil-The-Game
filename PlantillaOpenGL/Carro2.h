#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Carro2 : public Modelo {
public:
	Carro2();
	void avanzar();
	void retroceder();
	void rotar();
	void movimientoTeclado(int posicion);

private:
	void actualizarMatrizModelo();
	vec3 coordenadas = vec3(0.0f, 0.1f, 22.0f);
};