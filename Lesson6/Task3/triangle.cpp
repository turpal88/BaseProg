#include "triangle.h"
#include <iostream>
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure(3) { //обычный
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}
void Triangle::get_info() {
    std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;

}