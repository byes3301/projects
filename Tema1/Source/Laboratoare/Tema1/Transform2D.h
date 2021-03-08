#pragma once

#include <include/glm.h>

namespace Transform2D
{
	// Translate matrix
	inline glm::mat3 Translate(float translateX, float translateY)
	{
		// TODO implement translate matrix
		return glm::mat3(1, 0, 0, 0, 1, 0, translateX, translateY, 1);
	}

	// Scale matrix
	inline glm::mat3 Scale(float scaleX, float scaleY)
	{
		// TODO implement scale matrix
		return glm::mat3(scaleX, 0, 0, 0, scaleY, 0, 0, 0, 1);;
	}

	// Rotate matrix
	inline glm::mat3 Rotate(double radians)
	{
		// TODO implement rotate matrix
		double angle = radians * M_PI / 180;
		return glm::mat3(cos(angle), sin(angle), 0, -sin(angle), cos(angle), 0, 0, 0, 1);
	}
}
