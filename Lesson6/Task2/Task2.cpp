﻿
#include <iostream>
#include <windows.h>
#include "counter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string answer = "";
    int initial_value = 0;
    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if (answer != "нет" && answer != "да") std::cout << "Введите корректный ответ!" << std::endl;
        else break;
    } while (true);
    if (answer == "да") {

        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;

    }

    Counter counter(initial_value);
    char mark = ' ';
    do {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> mark;
        if (mark == '+') counter.make_increment();
        if (mark == '-') counter.make_decrement();
        if (mark == '=') counter.make_result();
        if (mark == 'x') counter.make_quit();

    } while (mark != 'x');



    return 0;

}