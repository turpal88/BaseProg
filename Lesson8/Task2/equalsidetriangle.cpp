#include "equalsidetriangle.h"
#include "except_class.h"
EqualSideTriangle::EqualSideTriangle(int a, int b, int c, int A, int B, int C) :EqualSideTriangle(a, b, c, A, B, C, "Равнобедренный треугольник") {}
EqualSideTriangle::EqualSideTriangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name) {
    if (a != c || A != C) {

        get_negative_info();
        throw Except_class("Причина: Стороны а и с не равны между собой и(или) углы А и С не равны между собой");


    }else get_positive_info();
} // равнобедренный
	

