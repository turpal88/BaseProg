#include "quadrilateral.h"
#include "except_class.h"
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, "Четырехугольник") {}
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& figure_name ) : Figure(4, figure_name) { //обычный
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
   
        
        if (figure_name == "Прямоугольник" && (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90)) {
            
                get_negative_info();
                throw Except_class(Quadrilateral_Exceptions::RECTANG);
           
        }
        else if ((figure_name == "Квадрат") && ((a!=b && a!=c && a!=d) || (A!=B && A!=C && A!=D))) {
            
                get_negative_info();
                throw Except_class(Quadrilateral_Exceptions::QUADRO);
            
        }
        else if (figure_name == "Параллелограм" && (a != c || b != d || A != C || B != D)) {
            
                get_negative_info();
                throw Except_class(Quadrilateral_Exceptions::PARALLELOGRAM);
            
        }
        else if (figure_name == "Ромб" && (a != b != c != d || A != C || B != D)) {
            
                get_negative_info();
                throw Except_class(Quadrilateral_Exceptions::RHOMB);
            
        }
        else if ((A + B + C + D) != 360) {
            get_negative_info();
            throw Except_class(Quadrilateral_Exceptions::SIMPLE_QUADRILATERAL);
        }
        else get_positive_info();

    
    
}
void Quadrilateral::get_positive_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; " << " углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl << std::endl;
    
}
void Quadrilateral::get_negative_info() {
    std::cout << figure_name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; " << " углы " << A << ", " << B << ", " << C << ", " << D << ") не был создан" << std::endl;
}