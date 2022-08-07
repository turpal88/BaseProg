

#include <iostream>
#include "windows.h"
#include "leaver.h"
int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Leaver::Leaver say_leave;
    std::string name = "";
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << say_leave.leave(name) << std::endl;
    return 0;
}


