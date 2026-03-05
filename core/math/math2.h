#pragma once

#include "core/object/object.h"
#include "core/math/math_funcs.h"

class Math2 : public Object {
	GDCLASS(Math2, Object);
	
	static float sin(float x);
	static float cos(float x);
	static float asin(float x);
	static float acos(float x);
	static float tan(float x);
	static float atan(float x);
	static float atan2(float y, float x);

	static void _bind_methods();
};