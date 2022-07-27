#include "rhomb.h"
#include "except_class.h"
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Rhomb(a, b, c, d, A, B, C, D, "Ромб") {}
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Parallelogram(a, b, c, d, A, B, C, D, figure_name) {
if (a != b || a!= c || a!= d || A != C || A!=B || B!=C || C != D) {

get_negative_info();
throw Except_class("Причина: Все стороны не равны между собой и(или) углы A, C и B, D попарно не равны");

        }else get_positive_info();
} //ромб
	
