
#include <iostream>
#include "windows.h"
#include "make_math_operations.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float num1 = 0, num2 = 0, result = 0;
    int operation_index = 0;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    do {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operation_index;
        if (operation_index <= 0 || operation_index > 5) std::cout << "Введите корректный номер математической операции!" << std::endl;
        else break;
    } while (true);
    if (num2 == 0 && operation_index == 4) {
        std::cout << "Деление на 0 невозможно!";
        return -1;
    }
    else std::cout << make_math(num1, num2, operation_index);
    
    return 0;

}

