#version 330 core

in vec3 FragPos;
in vec3 Normal;

out vec4 FragColor;

uniform vec3 viewPos;
uniform vec3 lightPos;
uniform vec3 lightColor;
uniform vec3 objectColor;

void main()
{
	// luz ambiente
	float ambientI = 0.5f;
	vec3 ambient = ambientI * lightColor;

	vec3 ld = normalize(-lightPos); // vector desde la luz hasta el origen
	vec3 fragDir = normalize(FragPos - lightPos); // vector desde el fragmento hasta la luz
	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos - FragPos); // vector desde la luz hasta el fragmento

	if (acos(dot(norm, lightDir)) < radians(20.0)) {
		// luz difusa
		float diff = max(dot(norm, lightDir), 0.0f);
		vec3 diffuse = diff * lightColor;

		// luz especular
		float specularStrength = 1.0f;
		vec3 viewDir = normalize(viewPos - FragPos);
		vec3 reflectDir = reflect(-lightDir, norm);
		float spec = pow(max(dot(viewDir, reflectDir), 0.0f), 128);
		vec3 specular = specularStrength * spec * lightColor;

		vec3 result = (ambient + diffuse + specular) * objectColor;
		FragColor = vec4 (result, 1.0f);
	} else {
		vec3 result = (ambient) * objectColor;
		FragColor = vec4 (result, 1.0f);
	}
}
