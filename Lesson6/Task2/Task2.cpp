
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
        if (mark == '+') {
            std::cout << counter.make_increment() << std::endl;
        } 
        if (mark == '-') {
            std::cout << counter.make_decrement() << std::endl;
        }
        if (mark == '=') {
            std::cout << counter.make_result() << std::endl;
        }
        if (mark == 'x') std::cout << "До свидания!" << std::endl;

    } while (mark != 'x');




    return 0;

}
