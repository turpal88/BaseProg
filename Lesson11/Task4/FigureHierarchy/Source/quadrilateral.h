#pragma once
#include <iostream>
#include "figure.h"
namespace FigureHierarchy {
    class Quadrilateral :public Figure {
    private:
        int a, b, c, d;
        int A, B, C, D;
    public:

        FIGUREHIERARCHY_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
        FIGUREHIERARCHY_API void get_info() override;
    };
}
