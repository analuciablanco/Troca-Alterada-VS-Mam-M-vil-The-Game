#version 330 core
//Primera linea SIEMPRE es la versión

//Atributos de entrada (Vienen desde el Vertex shader)
in vec4 fragmentColor;
in vec2 fragmentCoordenadaUV;

//Atributos de salida
out vec4 salidaColor;

uniform sampler2D samplerImagen;

//Funcion main()
void main() {
	salidaColor = fragmentColor;
	//salidaColor = texture(samplerImagen, fragmentCoordenadaUV).rgba;
}