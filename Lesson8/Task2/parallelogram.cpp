#include "parallelogram.h"
#include "except_class.h"
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, "Параллелограм") {}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name) {
if (a != c || b != d || A != C || B != D) {

get_negative_info();
throw Except_class("Причина: Стороны a,c и b,d попарно не равны и(или) углы A,C и B,D попарно не равны");

        }else get_positive_info();
} //параллелограмм
	