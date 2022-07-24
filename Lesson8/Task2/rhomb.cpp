#include "rhomb.h"
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Rhomb(a, b, c, d, A, B, C, D, "Ромб") {}
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name) : Parallelogram(a, b, c, d, A, B, C, D, figure_name) {} //ромб
	
