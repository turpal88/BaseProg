#include <iostream>
#include "windows.h"

#include "figure.h"
#include "triangle.h"
#include "recttriangle.h"
#include "equaltriangle.h"
#include "equalsidetriangle.h"
#include "quadrilateral.h"
#include "rectang.h"
#include "quadro.h"
#include "parallelogram.h"
#include "rhomb.h"


void print_info(Figure* obj) {
    obj->get_info();
}
int main()
{
    setlocale(LC_ALL, "Russian");

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

 

    Triangle triangle(10, 20, 30, 40, 50, 60);
    RectTriangle recttriangle(10, 20, 30, 40, 50);
    EqualTriangle equaltriangle(20);
    EqualSideTriangle equalsidetriangle(20, 40, 60, 80);

    Quadrilateral rect(10, 20, 30, 40, 20, 40, 60, 80);
    Rectang rectang(50, 55);
    Quadro quadro(60);
    Parallelogram parallelogram(30, 35, 40, 45);
    Rhomb rhomb(15, 25, 35);

    std::cout << "�����������:" << std::endl;
    print_info(&triangle);
    std::cout << std::endl;
    std::cout << "������������� �����������:" << std::endl;
    print_info(&recttriangle);
    std::cout << std::endl;
    std::cout << "�������������� �����������:" << std::endl;
    print_info(&equalsidetriangle);
    std::cout << std::endl;
    std::cout << "�������������� �����������:" << std::endl;
    print_info(&equaltriangle);
    std::cout << std::endl;

    std::cout << "��������������:" << std::endl;
    print_info(&rect);
    std::cout << std::endl;
    std::cout << "�������������:" << std::endl;
    print_info(&rectang);
    std::cout << std::endl;
    std::cout << "�������:" << std::endl;
    print_info(&quadro);
    std::cout << std::endl;
    std::cout << "��������������:" << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    std::cout << "����:" << std::endl;
    print_info(&rhomb);




    return 0;
}