#include "math2.h"

#include "core/object/class_db.h"
#include "core/object/method_bind.h"

float Math2::sin(float x) {
	return Math::sin(x);
}

float Math2::cos(float x) {
	return Math::cos(x);
}

float Math2::asin(float x) {
	return Math::asin(x);
}

float Math2::acos(float x) {
	return Math::acos(x);
}

float Math2::tan(float x) {
	return Math::tan(x);
}

float Math2::atan(float x) {
	return Math::atan(x);
}

float Math2::atan2(float y, float x) {
	return Math::atan2(y, x);
}

void Math2::_bind_methods() {
	ClassDB::bind_static_method(get_class_static(), D_METHOD("sin", "x"), &Math2::sin);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("cos", "x"), &Math2::cos);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("asin", "x"), &Math2::asin);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("acos", "x"), &Math2::acos);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("tan", "x"), &Math2::tan);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("atan", "x"), &Math2::atan);
	ClassDB::bind_static_method(get_class_static(), D_METHOD("atan2", "y", "x"), &Math2::atan2);
}