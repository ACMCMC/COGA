#version 330 core

in vec3 FragPos;
in vec3 Normal;
in vec2 TexCoord;

out vec4 FragColor;

uniform vec3 viewPos;
uniform vec3 lightPos;
uniform vec3 lightColor;
uniform vec3 objectColor;
uniform sampler2D tex1;
uniform sampler2D tex2;

void main()
{
	// luz ambiente
	float ambientI = 0.5f;
	vec3 ambient = ambientI * lightColor;

	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos - FragPos); // vector desde el fragmento hasta la luz

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

		vec3 result = (ambient + diffuse + specular);
		FragColor = vec4(result, 1.0f) * mix(texture(tex1, TexCoord), texture(tex2, TexCoord), 0.5);
	} else {
		vec3 result = (ambient);
		FragColor = vec4(result, 1.0f) * mix(texture(tex1, TexCoord), texture(tex2, TexCoord), 0.5);
	}
}
