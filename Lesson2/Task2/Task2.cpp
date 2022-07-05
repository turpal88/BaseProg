// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
struct Account {
    std::string name;
    int account_number;
    float sum;

};
void change_sum(Account& person) {
    
    std::cout << "Введите новый баланс: ";
    std::cin >> person.sum;
    std::cout << "Ваш счёт: " << person.name << ", " << person.account_number << ", " << person.sum << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //setlocale(LC_ALL, "Russian");
    Account person;
    std::cout << "Введите номер счёта: ";
    std::cin >> person.account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.sum;
    change_sum(person);
}