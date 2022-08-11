

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
    Racing_proccess race = create_race();
    cout_races_names(race);
    input_race_type(race);
    std::cout << '\n' << '\n';
    input_distance(race);
    

    std::cout << '\n\n\n';


    return 0;
}

