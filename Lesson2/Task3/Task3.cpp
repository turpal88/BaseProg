

#include <iostream>
#include <windows.h>
struct Address {
    std::string Country;
    std::string City;
    std::string Street;
    int house_num;
    int flat_num;
    int ind;
    
 void print_address() {
    std::cout << "Страна: " << Country << std::endl;
    std::cout << "Город: " << City << std::endl;
    std::cout << "Улица: " << Street << std::endl;
    std::cout << "Номер дома: " << house_num << std::endl;
    std::cout << "Номер квартиры: " << flat_num << std::endl;
    std::cout << "Индекс: " << ind << std::endl;
    std::cout << std::endl;
    }

};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Address Ekat = {"Россия", "Екатеринбург", "Ленина", 87, 42, 623587};
    Address Tumen = { "Россия", "Тюмень", "Азина", 99, 231, 665486 };
    Address Gomel = { "Беларусь", "Гомель", "Мира", 2, 11, 466657 };
    Ekat.print_address();
    Tumen.print_address();
    Gomel.print_address();

}

