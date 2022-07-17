

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
    
    int print_side_count() {
        return field;
    }
};

class Triangle : public Figure {
public:
    Triangle() :Figure(3) {
    
    }
    
};

class Rect : public Figure {
public:
    Rect() :Figure(4) {
    
    }
    
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Количество сторон: " << std::endl;
    Figure figure;

    Triangle triangle;
    Rect rectangle;

    std::cout << "Фигура: " << figure.print_side_count() << std::endl;
    std::cout << "Треугольник: " << triangle.print_side_count() << std::endl;
    std::cout << "Четырёхугольник: " << rectangle.print_side_count() << std::endl;

    return 0;
}


