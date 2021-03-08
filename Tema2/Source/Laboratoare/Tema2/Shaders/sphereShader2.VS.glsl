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
out vec3 frag_norm;

uniform float dist;

const float amplitude = 0.125;
const float frequency = 5;

void main()
{ 
	// http://developer.download.nvidia.com/CgTutorial/cg_tutorial_chapter06.html - 6.2
	float displacement = amplitude * cos(v_position.x * frequency * dist);
	
	frag_color = v_position  + displacement;
	gl_Position =  Projection * View * Model * vec4(v_position  - displacement, 1);

}

