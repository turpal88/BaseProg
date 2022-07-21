#define MODE 1

#include <iostream>
#include "windows.h"
#ifndef MODE
#error MODE macro has to be defined!
#endif

#if MODE == 1 
int add(int num1, int num2) {
    return num1 + num2;
}
#endif
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int num1 = 0, num2 = 0;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2);
#elif MODE == 0
    std::cout << "Работаю в режиме тренировки";
#else 
    std::cout << "Неизвестный режим. Завершение работы";
#endif



    return 0;

}



