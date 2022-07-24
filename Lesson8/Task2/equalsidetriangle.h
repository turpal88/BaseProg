#pragma once
#include "triangle.h"

class EqualSideTriangle :public Triangle {
private:
    EqualSideTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name);
public:

    EqualSideTriangle(int a, int b, int c, int A, int B, int C);
    
};