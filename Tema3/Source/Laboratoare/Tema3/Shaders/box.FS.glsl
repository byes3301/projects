#version 330
 
uniform sampler2D texture_1;
uniform vec3 color_pos;
in vec2 texcoord;
in vec3 world_position;
in vec3 world_normal;

uniform vec3 light_direction;
uniform vec3 light_position;
uniform vec3 eye_position;

uniform float material_kd;
uniform float material_ks;
uniform int material_shininess;

layout(location = 0) out vec4 out_color;

void main()
{
	// TODO : calculate the out_color using the texture2D() function
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
		specular_light =  pow(max(0, dot(world_normal,H)), material_shininess) + 0.25;
	}
	float d = length(world_position - light_position);

	vec4 t1 = texture2D(texture_1,texcoord);

	if(t1.a < 0.5)
		discard;

	vec3 out_text = mix(mix(t1.xyz, vec3(1,1,1), 0.05),color_pos,0.75);

	objectColor = (diffuse_light * material_kd + specular_light * material_ks) * (1/(pow(d,2))) * out_text;

	out_color = vec4(objectColor, 1);
}