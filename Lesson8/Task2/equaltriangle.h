#pragma once
#include "triangle.h"
class EqualTriangle :public Triangle {
private:
    EqualTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name);
public:
    EqualTriangle(int a, int b, int c, int A, int B, int C);
};