

#include <iostream>
#include <windows.h>
class Calculator {
    
private:
    double num1;
    double num2;

    bool set_num1(double num1) {
        if (num1 == 0) {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }
    bool set_num2(double num2) {
        if (num2 == 0) {
            std::cout << "Неверный ввод!" << std::endl;
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
    void ask_user_to_input() {
        double num1 = 0;
        double num2 = 0;
        do {
            
            std::cout << "Введите num1: ";
            std::cin >> num1;
        } while (!set_num1(num1));

        do {
            
            std::cout << "Введите num2: ";
            std::cin >> num2;
        } while (!set_num2(num2));

        std::cout << std::endl;
    }
    void make_math_action() {
        std::cout << "num1 + num2 = " << add() << std::endl;
        std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << multiply() << std::endl;
        std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << divide_2_1() << std::endl;
        std::cout << std::endl;
    }
public:
    
    void make_calc() {
        while (true) {
            ask_user_to_input();
            make_math_action();
        }
        

    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Calculator digits1;
    digits1.make_calc();


}

