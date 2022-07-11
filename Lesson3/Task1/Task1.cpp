#include <iostream>
#include <windows.h>

class Calculator {
    
private:
    double num1;
    double num2;

public:
    bool set_num1(double num1) {
        if (num1 == 0) {
            
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }
    bool set_num2(double num2) {
        if (num2 == 0) {
            
            return false;
        }
        else {
            this->num2 = num2;
            return true;
        }
    }
    
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
};

    

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1 = 0;
    double num2 = 0;
    Calculator digits1;
    while (true) {
        do {

            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (!digits1.set_num1(num1)) std::cout << "Неверный ввод!" << std::endl;
            else break;
        } while (true);

        do {

            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!digits1.set_num2(num2)) std::cout << "Неверный ввод!" << std::endl;
            else break;
        } while (true);

        std::cout << std::endl;

        std::cout << "num1 + num2 = " << digits1.add() << std::endl;
        std::cout << "num1 - num2 = " << digits1.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << digits1.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << digits1.multiply() << std::endl;
        std::cout << "num1 / num2 = " << digits1.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << digits1.divide_2_1() << std::endl;
        std::cout << std::endl;
    }
    return 0;
}