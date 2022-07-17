
#include <iostream>
#include "windows.h"

class Figure {

private:
    int field;

protected:
    Figure(int side_count) {
        field = side_count;
    }

public:
    Figure() {
        field = 0;
    }
    virtual void get_info() {
    
    }
    int get_side_count() {
        return field;
    }
};

  
class Triangle :public Figure {
private:
    int a, b, c;
    int A, B, C;
public:

    Triangle(int a, int b, int c, int A, int B, int C) :Figure(3) { //обычный
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void get_info() override {
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
    
    }
};

class RectTriangle :public Triangle {
public:
    RectTriangle(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90) { //прямоугольный


    }
};

class EqualTriangle :public Triangle {
public:
    EqualTriangle(int a) :Triangle(a, a, a, 60, 60, 60) { //равносторонний

    }
};

class EqualSideTriangle :public Triangle {
public:

    EqualSideTriangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A) { // равнобедренный


    }
};



class Quadrilateral :public Figure {
private:
    int a, b, c, d;
    int A, B, C, D;
public:

    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(4) { //обычный
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void get_info() override {
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << std::endl;
    }
};

class Rectang : public Quadrilateral {
public:
    Rectang(int a, int b) :Quadrilateral(a, b, a, b, 90, 90, 90, 90) { // прямоугольник

    }
};

class Quadro :public Rectang {
public:
    Quadro(int a) :Rectang(a, a) { // квадрат

    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B) { //параллелограмм

    }
};

class Rhomb :public Parallelogram {
public:
    Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) { //ромб

    }
};


void print_info(Figure* obj) {
    obj->get_info();
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Triangle triangle(10, 20, 30, 40, 50, 60);
    RectTriangle recttriangle(10, 20, 30, 40, 50);
    EqualTriangle equaltriangle(20);
    EqualSideTriangle equalsidetriangle(20, 40, 60, 80);

    Quadrilateral rect(10,20,30,40,20,40,60,80);
    Rectang rectang(50, 55);
    Quadro quadro(60);
    Parallelogram parallelogram(30, 35, 40, 45);
    Rhomb rhomb(15, 25, 35);

    std::cout << "Треугольник:" << std::endl;
    print_info(&triangle);
    std::cout << std::endl;
    std::cout << "Прямоугольный треугольник:" << std::endl;
    print_info(&recttriangle);
    std::cout << std::endl;
    std::cout << "Равнобедренный треугольник:" << std::endl;
    print_info(&equalsidetriangle);
    std::cout << std::endl;
    std::cout << "Равносторонний треугольник:" << std::endl;
    print_info(&equaltriangle);
    std::cout << std::endl;

    std::cout << "Четырёхугольник:" << std::endl;
    print_info(&rect);
    std::cout << std::endl;
    std::cout << "Прямоугольник:" << std::endl;
    print_info(&rectang);
    std::cout << std::endl;
    std::cout << "Квадрат:" << std::endl;
    print_info(&quadro);
    std::cout << std::endl;
    std::cout << "Параллелограмм:" << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    std::cout << "Ромб:" << std::endl;
    print_info(&rhomb);


   

    return 0;
}






