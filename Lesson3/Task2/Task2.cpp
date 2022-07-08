

#include <iostream>
#include <windows.h>

class Counter {
private:
    int digit;
    
public:
    Counter(int value) {
        this->digit = value;
    }
   
    void make_increment(char mark) {
        if (mark == '+') std::cout << ++digit << std::endl;
    }
    void make_decrement(char mark) {
        if (mark == '-') std::cout << --digit << std::endl;
    }
    void make_result(char mark) {
        if (mark == '=') std::cout << digit << std::endl;
    }
    void make_quit(char mark) {
        if (mark == 'x') std::cout << "До свидания!" << std::endl;
    }
    
 
    
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    std::string answer = "";
    int initial_value = 0;
    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if(answer != "нет" && answer != "да") std::cout << "Введите корректный ответ!" << std::endl;
    } while (answer!="нет" && answer!="да");
    if (answer == "да") {
        
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
       
    }
    
    Counter counter(initial_value);
    char mark = ' ';
    do {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> mark;
        if (mark == '+') counter.make_increment(mark);
        if (mark == '-') counter.make_decrement(mark);
        if (mark == '=') counter.make_result(mark);
        if (mark == 'x') counter.make_quit(mark);

    } while (mark != 'x');
   
        
    
    return 0;

}


