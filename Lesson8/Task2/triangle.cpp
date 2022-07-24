#include "triangle.h"
#include "except_class.h"
#include <iostream>
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "Треугольник") {}
Triangle::Triangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) :Figure(3, figure_name) { //обычный
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    
        
        if (figure_name == "Равнобедренный треугольник" && ((a != c) || (A != C))) {
            
                get_negative_info();
                throw Except_class(Triangle_Exceptions::EQUAL_SIDE_TRIANGLE);
            
        }
        else if (figure_name == "Равносторонний треугольник" && ((a!=b && a!=c) || (A!=B && A!=C))) {
            
                get_negative_info();
                throw Except_class(Triangle_Exceptions::EQUAL_TRIANGLE);
           
        }
        else if (figure_name == "Прямоугольный треугольник" && (C != 90)) {
            
                get_negative_info();
                throw Except_class(Triangle_Exceptions::RECT_TRIANGLE);
            
        }
        else if ((A + B + C) != 180) {
            get_negative_info();
            throw Except_class(Triangle_Exceptions::SIMPLE_TRIANGLE);
        }
        else get_positive_info();
    
        
        
    
    
}
void Triangle::get_positive_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << "; " << " углы " << A << ", " << B << ", " << C << ") создан" << std::endl << std::endl;
    
}
void Triangle::get_negative_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << "; " << " углы " << A << ", " << B << ", " << C << ") не был создан" << std::endl;

}