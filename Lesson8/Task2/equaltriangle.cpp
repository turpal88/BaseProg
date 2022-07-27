#include "equaltriangle.h"
#include "except_class.h"
EqualTriangle::EqualTriangle(int a, int b, int c, int A, int B, int C) :EqualTriangle(a, b, c, A, B, C, "Равносторонний треугольник") {}
EqualTriangle::EqualTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {

    if (a != b || a != c || A != B || A != C) {

    get_negative_info();
    throw Except_class("Причина: Все стороны не равны между собой и(или) все углы не равны 60");


        }else get_positive_info();
} //равносторонний
    
    