#pragma once
#include "figure.h"
enum class Triangle_Exceptions {SIMPLE_TRIANGLE, RECT_TRIANGLE, EQUAL_SIDE_TRIANGLE, EQUAL_TRIANGLE};
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
