/*
Иерархия классов транспортных средств:
 veachle.h veachle.cpp
 air_veachle.h air_veachle.cpp
 land_veachle.h land_veachle.cpp
 all_road_shoes.h all_road_shoes.cpp (Ботинки-быстроходы)
 broom.h broom.cpp (Метла)
 camel.h camel.cpp (Верблюд)
 carpet_aircraft.h carpet_aircraft.cpp (Ковер-самолет)
 centaur.h centaur.cpp (Кентавр)
 eagle.h eagle.cpp (Орел)
 fast_camel.h fast_camel.cpp (Верблюд-быстроход)
Класс Racing_proccess - класс самой гонки
 racing_proccess.h racing_proccess.cpp
Иерархия классов ТС и класс гонки собраны в dll.

Набор функций для взаимодействия пользователя с классом гонки
 user_interconnection.h user_interconnection.cpp
Консольное приложение - файл RacingUse.cpp. В нем находится функция main
В основной функции main используются функции, описанные в файлах user_interconnection.h и user_interconnection.cpp 

*/

#include <iostream>
#include <windows.h>
#include "user_interconnection.h"
#include "racing_proccess.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using namespace Racing;
    hello_user();
    Racing_proccess race;
    
    do {
        cout_races_names(race);
        input_race_type(race);
        std::cout << '\n' << '\n';
        input_distance(race);


        std::cout << '\n' << '\n';
        check_in_veachles(race);
        move_race(race);
        print_race_result(race);
        
        std::cout << '\n' << '\n';
        int value;
        do {
            std::cout << "1. Провести еще одну гонку" << std::endl;
            std::cout << "2. Выйти" << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> value;
            
            if (value == 1 || value == 2) break;
            else std::cout << "Введите корректное значение!" << std::endl;
        } while (true);
        if (value == 2) break;
        else if (value == 1) {
            std::cout << '\n' << '\n';
            continue;
        }

    } while (true);
    
    return 0;
}

