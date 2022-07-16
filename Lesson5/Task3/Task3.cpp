

#include <iostream>
#include "windows.h"

class Figure {
private:
    int a, b, c, d;
    int A, B, C, D;
    int side_count;
    std::string figure_name;
    std::string is_figure_right;
public:
    Figure() {
        side_count = 0;
        figure_name = "Фигура:";
        is_figure_right = "Правильная";
    }
    Figure(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = 0;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = 0;
        figure_name = "Треугольник:";
        side_count = 3;
    }
    Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        figure_name = "Четырехугольник:";
        side_count = 4;
    }
    virtual void get_info() {
        std::cout << figure_name << std::endl;
        std::cout << is_figure_right << std::endl;
        std::cout << "Количество сторон: " << side_count << std::endl;

    }
    int get_a() {
        return a;
    }
    int get_b() {
        return b;
    }
    int get_c() {
        return c;
    }
    int get_d() {
        return d;
    }
    int get_A() {
        return A;
    }
    int get_B() {
        return B;
    }
    int get_C() {
        return C;
    }
    int get_D() {
        return D;
    }
    int get_side_count() {
        return side_count;
    }
    std::string get_figure_name() {
        return figure_name;
    }
    std::string get_is_figure_right() {
        return is_figure_right;
    }
    void set_figure_name(std::string figure_name) {
        this->figure_name = figure_name;
    }
    void set_is_figure_right(std::string is_figure_right) {
        this->is_figure_right = is_figure_right;
    }
};

class Triangle : public Figure { //базовый класс треугольника
public:
    Triangle(int a, int b, int c, int A, int B, int C) :Figure(a, b, c, A, B, C) {
        if ((A + B + C) == 180) set_is_figure_right("Правильная");
        else set_is_figure_right("Неправильная");
    }
    void get_info() override {
        std::cout << get_figure_name() << std::endl;
        std::cout << get_is_figure_right() << std::endl;
        std::cout << "Количество сторон: " << get_side_count() << std::endl;
        std::cout << "Стороны: " << "a = " << get_a() << " " << "b = " << get_b() << " " << "c = " << get_c() << std::endl;
        std::cout << "Углы: " << "A = " << get_A() << " " << "B = " << get_B() << " " << "C = " << get_C() << std::endl;
    }

};

class RectTriangle : public Triangle { //класс прямоугольный треугольник
public:
    RectTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        set_figure_name("Прямоугольный треугольник");
    }

};

class EqualTriangle : public Triangle { // класс равносторонний треугольник
public:
    EqualTriangle(int a) :Triangle(a, a, a, 60, 60, 60) {
        set_figure_name("Равносторонний треугольник");
    }

};

class EqualSideTriangle : public Triangle { // класс равнобедренный треугольник

public:
    EqualSideTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
        set_figure_name("Равнобедренный треугольник");
    }
};



class Quadrilateral :public Figure { //базовый класс четырехугольник

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(a,b,c,d,A,B,C,D) {
        if ((A + B + C+D) == 360) set_is_figure_right("Правильная");
        else set_is_figure_right("Неправильная");
    }
    void get_info() override {
        std::cout << get_figure_name() << std::endl;
        std::cout << get_is_figure_right() << std::endl;
        std::cout << "Количество сторон: " << get_side_count() << std::endl;
        std::cout << "Стороны: " << "a = " << get_a() << " " << "b = " << get_b() << " " << "c = " << get_c() << "d = " << get_d() << std::endl;
        std::cout << "Углы: " << "A = " << get_A() << " " << "B = " << get_B() << " " << "C = " << get_C() << "D = " << get_D() << std::endl;
    }
};

class Rectang :public Quadrilateral { //класс прямоугольник
public:
    Rectang(int a, int b) :Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
        set_figure_name("Прямоугольник");
    }

};

class Quadro :public Rectang { // класс квадрат
public:
    Quadro(int a) : Rectang(a, a) {
        set_figure_name("Квадрат");
    }

};

class Parallelogram :public Quadrilateral { //класс параллелограмм
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B) {
        set_figure_name("Параллелограм");
    }

};

class Rhomb :public Parallelogram { //класс ромб
public:
    Rhomb(int a, int A, int B) :Parallelogram(a, a, A, B) {
        set_figure_name("Ромб");
    }

};

void print_info(Figure* figure) {
    figure->get_info();
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Triangle triangle1(10, 20, 30, 50, 90, 60);
    Triangle triangle2(10, 20, 30, 50, 90, 40);
    RectTriangle triangle3(10, 20, 30, 50, 90);
    EqualTriangle triangle4(43);
    EqualSideTriangle triangle5(40, 30, 20, 70);

    Quadrilateral quadrolateral1(20, 30, 40, 50, 60, 80, 25, 36);
    Rectang quadrolateral2(75, 86);
    Quadro quadrolateral3(89);
    Parallelogram quadrolateral4(47, 56, 89, 63);
    Rhomb quadrolateral5(36, 37, 89);

    print_info(&figure);
    std::cout << std::endl;
    print_info(&triangle1);
    std::cout << std::endl;
    print_info(&triangle2);
    std::cout << std::endl;
    print_info(&triangle3);
    std::cout << std::endl;
    print_info(&triangle4);
    std::cout << std::endl;
    print_info(&triangle5);
    std::cout << std::endl;

    print_info(&quadrolateral1);
    std::cout << std::endl;
    print_info(&quadrolateral2);
    std::cout << std::endl;
    print_info(&quadrolateral3);
    std::cout << std::endl;
    print_info(&quadrolateral4);
    std::cout << std::endl;
    print_info(&quadrolateral5);
    std::cout << std::endl;

    return 0;
}

