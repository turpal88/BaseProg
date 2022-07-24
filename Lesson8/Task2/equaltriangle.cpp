#include "equaltriangle.h"
EqualTriangle::EqualTriangle(int a, int b, int c, int A, int B, int C) :EqualTriangle(a, b, c, A, B, C, "Равносторонний треугольник") {}
EqualTriangle::EqualTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {} //равносторонний
    
    