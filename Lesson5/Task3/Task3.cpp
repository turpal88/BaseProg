#include <iostream>
#include "windows.h"

class Figure {

private:
    int field;
    std::string figure_name;
    std::string is_figure_right;
protected:
     
    Figure(int side_count) {
        field = side_count;
        
        
    }
   
    void set_figure_name(std::string figure_name) {
        this->figure_name = figure_name;
    }
    void set_is_figure_right(std::string is_figure_right) {
        this->is_figure_right = is_figure_right;
    }
    int get_field() {
        return field;
    }
    std::string get_figure_name() {
        return figure_name;
    }
    std::string get_is_figure_right() {
        return is_figure_right;
    }
public:
    Figure() {
        figure_name = "Фигура:";
        is_figure_right = "Правильная";
        field = 0;
    }
    virtual void get_info() {
        std::cout << figure_name << std::endl;
        std::cout << is_figure_right << std::endl;
        std::cout << "Количество сторон: " << field << std::endl;
    }
    
};


class Triangle :public Figure {
private:
    int a, b, c;
    int A, B, C;
protected:
    std::string get_figure_parameters() {
       return ((A + B + C) == 180) ? "Правильная" : "Неправильная";
    }
public:

    Triangle(int a, int b, int c, int A, int B, int C) :Figure(3) { //обычный
        set_figure_name("Треугольник");
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        set_is_figure_right(get_figure_parameters());

    }
    void get_info() override {
        std::cout << get_figure_name() << ":" << std::endl;
        std::cout << get_is_figure_right() << std::endl;
        std::cout << "Количество сторон: " << get_field() << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;

    }
};

class RectTriangle :public Triangle {
public:
    RectTriangle(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90) { //прямоугольный
        set_figure_name("Прямоугольный треугольник");

    }
};

class EqualTriangle :public Triangle {
public:
    EqualTriangle(int a) :Triangle(a, a, a, 60, 60, 60) { //равносторонний
        set_figure_name("Равносторонний треугольник");
    }
};

class EqualSideTriangle :public Triangle {
public:

    EqualSideTriangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A) { // равнобедренный
        set_figure_name("Равнобедренный треугольник");

    }
};



class Quadrilateral :public Figure {
private:
    int a, b, c, d;
    int A, B, C, D;
protected:
    std::string get_figure_parameters() {
        return ((A + B + C + D) == 360) ? "Правильная" : "Неправильная";
    }
public:

    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(4) { //обычный
        set_figure_name("Четырехугольник");
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        set_is_figure_right(get_figure_parameters());
    }
    void get_info() override {
        std::cout << get_figure_name() << ":" << std::endl;
        std::cout << get_is_figure_right() << std::endl;
        std::cout << "Количество сторон: " << get_field() << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    }
};

class Rectang : public Quadrilateral {
public:
    Rectang(int a, int b) :Quadrilateral(a, b, a, b, 90, 90, 90, 90) { // прямоугольник
        set_figure_name("Прямоугольник");
    }
};

class Quadro :public Rectang {
public:
    Quadro(int a) :Rectang(a, a) { // квадрат
        set_figure_name("Квадрат");
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B) { //параллелограмм
        set_figure_name("Параллелограм");
    }
};

class Rhomb :public Parallelogram {
public:
    Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) { //ромб
        set_figure_name("Ромб");
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


















