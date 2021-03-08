#version 330

layout(location = 0) in vec3 v_position;
layout(location = 1) in vec3 v_normal;
layout(location = 2) in vec2 v_texture;
layout(location = 3) in vec3 v_color;

uniform mat4 Model;
uniform mat4 View;
uniform mat4 Projection;

out vec2 texcoord;
out vec3 world_position;
out vec3 world_normal;

void main()
{
	vec3 world_n = normalize( mat3(Model) * v_normal );
	vec3 world_pos = (Model * vec4(v_position,1)).xyz;
	world_position = world_pos;
	world_normal = world_n;
	texcoord = vec2(v_texture.x, v_texture.y);
	gl_Position = Projection * View * Model * vec4(v_position, 1.0);
}