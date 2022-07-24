#pragma once
#include "rectang.h"
class Quadro :public Rectang {
private:
    Quadro(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name);
public:
    Quadro(int a, int b, int c, int d, int A, int B, int C, int D);
};
