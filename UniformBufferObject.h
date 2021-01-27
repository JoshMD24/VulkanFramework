#ifndef UNIFORMBUFFEROBJECT_H
#define UNIFORMBUFFEROBJECT_H
#include "Matrix.h"
#include "glm/glm.hpp""
#include "glm/gtc/matrix_transform.hpp"
using namespace MATH;
struct UniformBufferObject 
{
	alignas(16) glm::mat4 model;
	alignas(16) glm::mat4 view;
	alignas(16) glm::mat4 proj;
};
#endif
