#include "triangle.h"
#include "except_class.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "Треугольник") {}
Triangle::Triangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) :Figure(3, figure_name) { //обычный
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    
        
        
        
        
        if ((A + B + C) != 180) {
            get_negative_info();
            throw Except_class("Причина: сумма углов не равна 180");
        }
        else if(figure_name == "Треугольник") get_positive_info();
    
        
        
    
    
}
void Triangle::get_positive_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << "; " << " углы " << A << ", " << B << ", " << C << ") создан" << std::endl << std::endl;
    
}
void Triangle::get_negative_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << "; " << " углы " << A << ", " << B << ", " << C << ") не был создан" << std::endl;

}