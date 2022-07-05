// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct Account {
    std::string name;
    int account_number;
    float sum;

};
void change_sum(Account& person) {
    //setlocale(LC_ALL, "Russia");
    std::cout << "Введите новый баланс: ";
    std::cin >> person.sum;
    std::cout << "Ваш счёт: " << person.name << ", " << person.account_number << ", " << person.sum << std::endl;
}

int main()
{
    setlocale(LC_ALL, "");
    Account person;
    std::cout << "Введите номер счёта: ";
    std::cin >> person.account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.sum;
    change_sum(person);
}