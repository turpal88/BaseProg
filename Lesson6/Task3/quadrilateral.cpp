#include "quadrilateral.h"
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(4) { //обычный
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}
void Quadrilateral::get_info() {
    std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
    std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << std::endl;
}