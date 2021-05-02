#version 330 core

in vec3 FragPos;
out vec4 FragColor;

uniform vec3 lightColor;
uniform vec3 objectColor;

void main()
{
	// luz ambiente
	vec3 ambient = lightColor;

	FragColor = vec4(ambient, 1.0f);
}