#pragma once
#include "figure.h"
namespace FigureHierarchy {
    class Triangle :public Figure {
    private:
        int a, b, c;
        int A, B, C;
    public:

        FIGUREHIERARCHY_API Triangle(int a, int b, int c, int A, int B, int C);
        FIGUREHIERARCHY_API void get_info() override;
    };
}

