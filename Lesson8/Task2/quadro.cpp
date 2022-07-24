#include "quadro.h"
Quadro::Quadro(int a, int b, int c, int d, int A, int B, int C, int D) : Quadro(a, b, c, d, A, B, C, D, "Квадрат") {}
Quadro::Quadro(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Rectang(a, b, c, d, A, B, C, D, figure_name) {} // квадрат
	
