#pragma once

#include "../defines.h"

#ifdef _WIN32
#else

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <EGL/egl.h>
#include "../Shaders/Shader.h"
#endif
namespace star
{
	class QuadCol
	{
	public:
		QuadCol();
		~QuadCol();

		void Rotate(const glm::mat4& matrix, float angle, const vec3& axis);
		void Scale(const glm::mat4& matrix, const vec3& scale);
		void Translate(const glm::mat4& matrix, const vec3& translation);

		void Draw();

	private:
		void createSquare();

		Shader* mShader;

		glm::mat4	modelMatrix,
					rotMatrix,
					scaleMatrix,
					translateMatrix;

		GLfloat squareVertices[8];
	};
}