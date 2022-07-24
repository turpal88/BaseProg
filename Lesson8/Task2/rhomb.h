#pragma once
#include "parallelogram.h"
class Rhomb :public Parallelogram {
private:
    Rhomb(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name);
public:
    Rhomb(int a, int b, int c, int d, int A, int B, int C, int D);
};
