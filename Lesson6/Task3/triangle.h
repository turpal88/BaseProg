#pragma once
#include "figure.h"
class Triangle :public Figure {
private:
    int a, b, c;
    int A, B, C;
public:

    Triangle(int a, int b, int c, int A, int B, int C);
    void get_info() override;
};
