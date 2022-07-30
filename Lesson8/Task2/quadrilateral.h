#pragma once

#include "figure.h"

class Quadrilateral :public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name);
public:

    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    void get_positive_info() override;
    void get_negative_info() override;
};