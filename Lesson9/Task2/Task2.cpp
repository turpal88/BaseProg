

#include <iostream>
#include "windows.h"

#include "fraction.h"
//#include "input_fraction.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int numerator = 0, denominator = 0;
    
    std::cout << "Введите числитель дроби №1 ";
     std::cin >> numerator;
    std::cout << "Введите знаменатель дроби №1 ";
    std::cin >> denominator;


    Fraction f1(numerator, denominator);

    std::cout << "Введите числитель дроби №2 ";
    std::cin >> numerator;
    std::cout << "Введите знаменатель дроби №2 ";
    std::cin >> denominator;

    Fraction f2(numerator, denominator);
    std::cout << "\n";
    
    
   
    
    //+
    f1.get_fraction();
    std::cout << " + ";
    f2.get_fraction();
    std::cout << " = ";
    (f1 + f2).get_fraction();
    std::cout << '\n';

    //-
    f1.get_fraction();
    std::cout << " - ";
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


