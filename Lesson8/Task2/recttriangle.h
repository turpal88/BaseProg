#pragma once
#include "triangle.h"

class RectTriangle :public Triangle {
private:
    RectTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name);
public:
    RectTriangle(int a, int b, int c, int A, int B, int C);
};
