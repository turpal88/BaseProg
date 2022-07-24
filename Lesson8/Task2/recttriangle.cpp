#include "recttriangle.h"
RectTriangle::RectTriangle(int a, int b, int c, int A, int B, int C) : RectTriangle(a, b, c, A, B, C, "Прямоугольный треугольник") {}
RectTriangle::RectTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {} //прямоугольный
	

