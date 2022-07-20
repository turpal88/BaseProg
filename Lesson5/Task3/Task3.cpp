#include <iostream>
#include "windows.h"

class Figure {


protected:
    int field;
    std::string figure_name;
    Figure(int side_count, const std::string& name = "Фигура") : field(side_count), figure_name(name) {}
    virtual bool is_figure_right() const {
        return true;
    }
    
    std::string get_figure_name() {
        return figure_name;
    }
 
public:
    Figure() : field(0) {}
       
    virtual void get_info() {
        std::cout << figure_name << std::endl;
        std::cout << (is_figure_right() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << field << std::endl;
    }
    
};


class Triangle :public Figure {
private:
    int a, b, c;
    int A, B, C;
protected:
    bool is_figure_right() const override {
        return ((A + B + C) == 180) ? true : false;
    }
    
public:

    Triangle(int a, int b, int c, int A, int B, int C, const std::string& name = "Треугольник") :Figure(3, name) { //обычный
       
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
       

    }
    void get_info() override {
        std::cout << get_figure_name() << ":" << std::endl;
        std::cout << (is_figure_right() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << field << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;

    }
};

class RectTriangle :public Triangle {
public:
    RectTriangle(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник") {} //прямоугольный
    
};

class EqualTriangle :public Triangle {
public:
    EqualTriangle(int a) :Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник") {} //равносторонний
    
};

class EqualSideTriangle :public Triangle {
public:

    EqualSideTriangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A, "Равнобедренный треугольник") {} // равнобедренный
    
};



class Quadrilateral :public Figure {
private:
    int a, b, c, d;
    int A, B, C, D;
protected:
   
    bool is_figure_right() const override {
        return ((A + B + C + D) == 360) ? true : false;
    }
public:

    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, const std::string& name = "Четырехугольник") :Figure(4, name) { //обычный
        
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
        std::cout << get_figure_name() << ":" << std::endl;
        std::cout << (is_figure_right() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << field << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    }
};

class Rectang : public Quadrilateral {
public:
    Rectang(int a, int b) :Quadrilateral(a, b, a, b, 90, 90, 90, 90, "Прямоугольник") {} // прямоугольник
        
   
};

class Quadro :public Quadrilateral {
public:
    Quadro(int a) :Quadrilateral(a, a, a, a, 90, 90, 90, 90, "Квадрат") {} // квадрат
        
   
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B, "Параллелограм") {} //параллелограмм
        
    
};

class Rhomb :public Quadrilateral {
public:
    Rhomb(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B, "Ромб") {} //ромб
       
   
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

    Quadrilateral rect(10, 20, 30, 40, 20, 40, 60, 80);
    Rectang rectang(50, 55);
    Quadro quadro(60);
    Parallelogram parallelogram(30, 35, 40, 45);
    Rhomb rhomb(15, 25, 35);

    
    print_info(&triangle);
    std::cout << std::endl;
    
    print_info(&recttriangle);
    std::cout << std::endl;
    
    print_info(&equalsidetriangle);
    std::cout << std::endl;
   
    print_info(&equaltriangle);
    std::cout << std::endl;

    
    print_info(&rect);
    std::cout << std::endl;
    
    print_info(&rectang);
    std::cout << std::endl;
    
    print_info(&quadro);
    std::cout << std::endl;
    
    print_info(&parallelogram);
    std::cout << std::endl;
   
    print_info(&rhomb);




    return 0;
}


















