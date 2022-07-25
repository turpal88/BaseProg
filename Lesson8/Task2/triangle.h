#pragma once
#include "figure.h"

class Triangle :public Figure {
private:
    int a, b, c;
    int A, B, C;
protected:
    Triangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name);
public:

    
    Triangle(int a, int b, int c, int A, int B, int C);
    void get_positive_info() override;
    void get_negative_info() override;
};
