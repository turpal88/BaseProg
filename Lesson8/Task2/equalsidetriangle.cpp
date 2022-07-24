#include "equalsidetriangle.h"
EqualSideTriangle::EqualSideTriangle(int a, int b, int c, int A, int B, int C) :EqualSideTriangle(a, b, c, A, B, C, "Равнобедренный треугольник") {}
EqualSideTriangle::EqualSideTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {} // равнобедренный
	

