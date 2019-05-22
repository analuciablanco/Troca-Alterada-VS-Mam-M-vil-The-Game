#version 330 core
//La primera linea SIEMPRE es la version

//Atributos de entrada (vienen desde c++)
layout(location = 0) in vec4 posicion;
in vec4 color;
in vec2 coordenadaUV;

//Uniforms
uniform mat4 modelo; //rotación, traslación y escala del objeto.
uniform mat4 vista; //cámara.
uniform mat4 proyeccion; //deformación natural del objeto con relación a la vista.
uniform sampler2D samplerImagen;

//Atributos de salida (Van hacia el fragment shader)
out vec4 fragmentColor;
out vec2 fragmentCoordenadaUV;

//Funcion main
void main() {
	//Crear la matriz MVP
	mat4 MVP = proyeccion * vista * modelo;

	//Es la posicion de salida del vertice
	//Es del tipo vec4
	gl_Position = MVP * posicion;

	//Establecer valores de atributos de salida
	fragmentColor = color;

	//Establecer el valor de fragmentCoordenadaUV
	fragmentCoordenadaUV = coordenadaUV;
}