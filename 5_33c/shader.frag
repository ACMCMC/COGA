#version 330 core

in vec3 FragPos;
in vec3 Normal;

out vec4 FragColor;

uniform vec3 viewPos;
uniform vec3 lightPos;
uniform vec3 lightColor;
uniform vec3 objectColor;

uniform float ambientI;
uniform float diffuseI;
uniform float specularI;

void main()
{
	// luz ambiente
	vec3 ambient = ambientI * lightColor;

	// luz difusa
	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos - FragPos);
	float diff = max(dot(norm, lightDir), 0.0f);
	vec3 diffuse = diffuseI * diff * lightColor;

	// luz especular
	vec3 viewDir = normalize(viewPos - FragPos);
	vec3 reflectDir = reflect(-lightDir, norm);
	float spec = pow(max(dot(viewDir, reflectDir), 0.0f), 128);
	vec3 specular = specularI * spec * lightColor;

	// combinamos
	vec3 result = (ambient + diffuse) * objectColor;
	FragColor = vec4 (result, 1.0f);
}
