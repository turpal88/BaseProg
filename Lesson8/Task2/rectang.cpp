#include "rectang.h"
Rectang::Rectang(int a, int b, int c, int d, int A, int B, int C, int D) :Rectang(a, b, c, d, A, B, C, D, "Прямоугольник") {} // прямоугольник
Rectang::Rectang(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name) {} // прямоугольник
	
