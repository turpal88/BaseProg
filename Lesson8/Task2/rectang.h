#pragma once
#include "quadrilateral.h"
class Rectang : public Quadrilateral {
protected:
    Rectang(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name);
public:
    Rectang(int a, int b, int c, int d, int A, int B, int C, int D);
};
