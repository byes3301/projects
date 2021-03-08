#version 330

uniform vec3 object_color;

layout(location = 0) out vec4 out_color;

in vec3 frag_color;
in vec3 world_position;
in vec3 world_normal;

uniform vec3 light_direction;
uniform vec3 light_position;
uniform vec3 eye_position;

uniform float material_kd;
uniform float material_ks;
uniform int material_shininess;
void main()
{
	vec3 objectColor;
	vec3 L = normalize(light_position - world_position);
	vec3 V = normalize(eye_position - world_position);
	vec3 H = normalize(L + V);
	vec3 R = reflect(L,world_normal);

	float ambient_light = 0.25;
	float diffuse_light = max(ambient_light, dot(world_normal,L));
	float specular_light = 0;
	if (diffuse_light > 0)
	{
		specular_light =  pow(max(0, dot(world_normal,H)), material_shininess);
	}
	float d = length(world_position - light_position);
	objectColor = (diffuse_light * material_kd + specular_light * material_ks) * (1/(pow(d,2))) * frag_color;
	// TODO: write pixel out color
	out_color = vec4(objectColor,1);
}