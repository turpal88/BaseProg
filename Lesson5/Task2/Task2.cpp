
#include <iostream>
#include "windows.h"



  
class Triangle{
private:
    int a, b, c;
    int A, B, C;
public:
    
    Triangle(int a, int b, int c, int A, int B, int C) { //обычный
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Triangle(int a, int b, int c, int A, int B) { //прямоугольный
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 90;
        
    }
    Triangle(int a) {
        this->a = this->b = this->c = a; //равносторонний
        A = B = C = 60;
    }
    Triangle(int a, int b, int A, int B) { // равнобедренный
        this->a = this->c = a;
        this->b = b;
        this->A = this->C = A;
        this->B = B;
    
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
    int get_A() {
        return A;
    }
    int get_B() {
        return B;
    }
    int get_C() {
        return C;
    }
};

class Rect {
private:
    int a, b, c, d;
    int A, B, C, D;
public:
    
    Rect(int a, int b, int c, int d, int A, int B, int C, int D) { //обычный
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    Rect(int a, int b) { // прямоугольник
        this->a = this->c = a;
        this->b = this->d = b;
        A = B = C = D = 90;
    }
    Rect(int a) { // квадрат
        this->a = this->b = this->c = this->d = a;
        A = B = C = D = 90;
    }
    Rect(int a, int b, int A, int B) { //параллелограмм
        this->a = this->c = a;
        this->b = this->d = b;
        this->A = this->C = A;
        this->B = this->D = B;
    }
    Rect(int a, int A, int B) { //ромб
        this->a = this->b = this->c = this->d = a;
        this->A = this->C = A;
        this->B = this->D = B;
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
};

class RectTriangle :public Triangle { //прямоугольный
public:
  
    RectTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B) {
        
    }

};
class EqualTriangle :public Triangle { //равносторонний
public:
    EqualTriangle(int a) :Triangle(a) {
    
    }

};
class EqualSideTriangle :public Triangle { // равнобедренный
public:
    EqualSideTriangle(int a, int b, int A, int B) :Triangle(a, b, A, B) {
    
    }
};


class Rectang :public Rect { // прямоугольник

public:
    Rectang(int a, int b) :Rect(a, b) {}
   
};
class Quadro :public Rect { // квадрат

public:
    Quadro(int a) :Rect(a) {}
};
class Parallelogram :public Rect { //параллелограмм
public:
    Parallelogram(int a, int b, int A, int B) :Rect(a, b, A, B) {}
};
class Rhomb :public Rect { //ромб
public:
    Rhomb(int a, int A, int B):Rect(a, A, B){
    
    }

};

void get_3_info(Triangle* obj) {
    std::cout << "Стороны: " << "a = " << obj->get_a() << " " << "b = " << obj->get_b() << " " << "c = " << obj->get_c() << std::endl;
    std::cout << "Углы: " << "A = " << obj->get_A() << " " << "B = " << obj->get_B() << " " << "C = " << obj->get_C() << std::endl;
}

void get_4_info(Rect* obj) {
    std::cout << "Стороны: " << "a = " << obj->get_a() << " " << "b = " << obj->get_b() << " " << "c = " << obj->get_c() << "d = " << obj->get_d() << std::endl;
    std::cout << "Углы: " << "A = " << obj->get_A() << " " << "B = " << obj->get_B() << " " << "C = " << obj->get_C() << "D = " << obj->get_D() << std::endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Triangle triangle(10, 20, 30, 40, 50, 60);
    RectTriangle recttriangle(10, 20, 30, 40, 50);
    EqualTriangle equaltriangle(20);
    EqualSideTriangle equalsidetriangle(20, 40, 60, 80);

    Rect rect(10,20,30,40,20,40,60,80);
    Rectang rectang(50, 55);
    Quadro quadro(60);
    Parallelogram parallelogram(30, 35, 40, 45);
    Rhomb rhomb(15, 25, 35);

    std::cout << "Треугольник:" << std::endl;
    get_3_info(&triangle);
    std::cout << std::endl;
    std::cout << "Прямоугольный треугольник:" << std::endl;
    get_3_info(&recttriangle);
    std::cout << std::endl;
    std::cout << "Равнобедренный треугольник:" << std::endl;
    get_3_info(&equalsidetriangle);
    std::cout << std::endl;
    std::cout << "Равносторонний треугольник:" << std::endl;
    get_3_info(&equaltriangle);
    std::cout << std::endl;

    std::cout << "Четырёхугольник:" << std::endl;
    get_4_info(&rect);
    std::cout << std::endl;
    std::cout << "Прямоугольник:" << std::endl;
    get_4_info(&rectang);
    std::cout << std::endl;
    std::cout << "Квадрат:" << std::endl;
    get_4_info(&quadro);
    std::cout << std::endl;
    std::cout << "Параллелограмм:" << std::endl;
    get_4_info(&parallelogram);
    std::cout << std::endl;
    std::cout << "Ромб:" << std::endl;
    get_4_info(&rhomb);


   

    return 0;
}






