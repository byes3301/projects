#version 330

layout(location = 0) in vec3 v_position;
layout(location = 1) in vec3 v_normal;
layout(location = 2) in vec2 v_texture_coord;
layout(location = 3) in vec3 v_color;

uniform mat4 Model;
uniform mat4 View;
uniform mat4 Projection;

uniform vec3 color_pos;

out vec3 frag_color;

void main()
{
	frag_color = color_pos;
	gl_Position = Model * vec4(v_position, 1.0);
}
