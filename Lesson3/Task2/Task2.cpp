

#include <iostream>
#include <windows.h>

class Counter {
private:
    int digit;
       
    void user_defined_digit(int value) {
        this->digit = value;

    }
    int ask_user_digit(std::string mark2) {
        if (mark2 == "да") {
            int number = 0;
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> number;
            user_defined_digit(number);
            return 1;
        }
        else if (mark2 == "нет") {
            digit = 0;
            return 1;
        }
        else {
            std::cout << "Введите корректный ответ!" << std::endl;
            return -1;
        }
    }
    void make_action(char mark) {
        if (mark == '+') std::cout << ++digit << std::endl;
        if (mark == '-') std::cout << --digit << std::endl;
        if (mark == '=') std::cout << digit << std::endl;
        if (mark == 'x') std::cout << "До свидания!" << std::endl;
    }
public:
    int define_answer(std::string answer) {
        return ask_user_digit(answer);
    }
    void define_mark() {
        char mark = ' ';
        do {
            
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> mark;
            make_action(mark);

        } while (mark != 'x');
        
    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Counter counter;
    std::string answer = "";
    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
    } while (counter.define_answer(answer) == -1);
    counter.define_mark();
        
    
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

}


