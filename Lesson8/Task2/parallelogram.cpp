#include "parallelogram.h"
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, "Параллелограм") {}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name) {} //параллелограмм
	