

#include <iostream>
#include "windows.h"

#include "fraction.h"
//#include "input_fraction.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::string fraction = "";
    std::cout << "Введите дробь №1 (числитель/знаменатель) ";
    getline(std::cin, fraction, '\n');
    Fraction f1(fraction);
    std::cout << "Введите дробь №1 (числитель/знаменатель) ";
    
    getline(std::cin, fraction, '\n');
    std::cout << '\n';
    Fraction f2(fraction);
    
    //+
    f1.get_fraction();
    std::cout << " + ";
    f2.get_fraction();
    std::cout << " = ";
    (f1 + f2).get_fraction();
    std::cout << '\n';

    //-
    f1.get_fraction();
    std::cout << " + ";
    f2.get_fraction();
    std::cout << " = ";
    (f1 - f2).get_fraction();
    std::cout << '\n';


    //*
    f1.get_fraction();
    std::cout << " * ";
    f2.get_fraction();
    std::cout << " = ";
    (f1 * f2).get_fraction();
    std::cout << '\n';

    // /
    f1.get_fraction();
    std::cout << " / ";
    f2.get_fraction();
    std::cout << " = ";
    (f1 / f2).get_fraction();
    std::cout << '\n' << '\n';

    std::cout << "Демонстрация перегрузки операций префиксного и постфиксного инкремента/декремента \n";
    std::cout << "Дробь №1 "; f1.get_fraction(); std::cout << '\n';
    std::cout << "f1++ + f2 = ";
    (f1++ + f2).get_fraction();
    std::cout << '\n';
    std::cout << "Значение дроби №1 ";
    f1.get_fraction();
    std::cout << '\n';
    return 0;
}


