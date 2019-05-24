#include "stdafx.h"
#include "Gano.h"

void Gano::actualizarMatrizModelo() {

	modelo = mat4(1.0f);
	modelo = translate(modelo, coordenadas);
	
}

Gano::Gano() {
	//letra G
	vertices.push_back({ vec4(-5.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-3.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(-5.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(-5.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-5.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(0.0f, 11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-1.0f,  14.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  14.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(0.0f,  14.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  14.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(-2.0f,  13.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(0.0f,  13.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	//Letra A

	vertices.push_back({ vec4(1.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(3.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(5.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(7.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(7.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(1.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	
	vertices.push_back({ vec4(1.0f,  13.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  13.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(5.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(1.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	//Letra N
	vertices.push_back({ vec4(8.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(8.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(12.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(12.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(14.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(14.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(8.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(14.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(14.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(10.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });


	//Letra O
	vertices.push_back({ vec4(15.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(15.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(17.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(17.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	
	vertices.push_back({ vec4(19.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(19.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(15.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  16.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(15.0f,  14.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });

	vertices.push_back({ vec4(15.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  11.0f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(21.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
	vertices.push_back({ vec4(15.0f,  12.5f,  10.0f, 1.0f),		vec4(pistaR2 / 255.0, pistaG2 / 255.0, pistaB2 / 255.0, 1.0f) });
}


