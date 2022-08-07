

#include <iostream>
#include <windows.h>
#include "greeter.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name = "";
    Greeter::Greeter hello;
    std::cout << "Введите имя: ";
    std::cin >> name;
   
    std::cout << hello.greet(name) << std::endl;
    

    return 0;
}

