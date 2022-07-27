#include "recttriangle.h"
#include "except_class.h"
RectTriangle::RectTriangle(int a, int b, int c, int A, int B, int C) : RectTriangle(a, b, c, A, B, C, "Прямоугольный треугольник") {}
RectTriangle::RectTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {
    if (C != 90) {

    get_negative_info();
    throw Except_class("Причина: Угол С не равен 90 градусов");

        }else get_positive_info();
} //прямоугольный
	

