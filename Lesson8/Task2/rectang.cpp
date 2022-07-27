#include "rectang.h"
#include "except_class.h"
Rectang::Rectang(int a, int b, int c, int d, int A, int B, int C, int D) :Rectang(a, b, c, d, A, B, C, D, "Прямоугольник") {} // прямоугольник
Rectang::Rectang(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name) {
    if (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90) {

        get_negative_info();
        throw Except_class("Причина: Стороны a,c и b,d попарно не равны и(или) все углы не равны 90");

    }else get_positive_info();
} // прямоугольник
	
