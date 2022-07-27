#include "quadro.h"
#include "except_class.h"
Quadro::Quadro(int a, int b, int c, int d, int A, int B, int C, int D) : Quadro(a, b, c, d, A, B, C, D, "Квадрат") {}
Quadro::Quadro(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Rectang(a, b, c, d, A, B, C, D, figure_name) {
    if (a != b || a != c || a != d || A != B || A != C || A != D || A!=90) {

    get_negative_info();
    throw Except_class("Причина: Все стороны не равны между собой и(или) все углы не равны 90");

        }else get_positive_info();
} // квадрат
	
