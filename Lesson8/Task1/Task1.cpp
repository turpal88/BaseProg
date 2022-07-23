

#include <iostream>
#include "windows.h"
#include "checking_function.h"
//#define FORBIDDEN_LENGTH 5
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int forbidden_length = 0;
    int actual_length = 0;
    std::string word = " ";
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    

    try {
        while (true) {
            std::cout << "Введите слово: ";
            std::cin >> word;
            actual_length = checking_function(word, forbidden_length);
            std::cout << "Длина слова " << "\"" << word << "\" равна " << actual_length << std::endl;



        }

    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

