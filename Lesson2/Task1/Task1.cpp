#include <iostream>
enum class Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December

};
void ask_for_number_month() {
    int number = 0;
    

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> number;
        if (number < 0 || number > 12) std::cout << "Неправильный номер!" << std::endl << std::endl;
        else if (number == 0) std::cout << "До свидания" << std::endl << std::endl;
        else {
         switch (static_cast<Months>(number)) {
            case Months::January: std::cout << "Январь" << std::endl;
                break;
            case Months::February: std::cout << "Февраль" << std::endl;
                break;
            case Months::March: std::cout << "Март" << std::endl;
                break;
            case Months::April: std::cout << "Апрель" << std::endl;
                break;
            case Months::May: std::cout << "Май" << std::endl;
                break;
            case Months::June: std::cout << "Июнь" << std::endl;
                break;
            case Months::July: std::cout << "Июль" << std::endl;
                break;
            case Months::August: std::cout << "Август" << std::endl;
                break;
            case Months::September: std::cout << "Сентябрь" << std::endl;
                break;
            case Months::October: std::cout << "Октябрь" << std::endl;
                break;
            case Months::November: std::cout << "Ноябрь" << std::endl;
                break;
            case Months::December: std::cout << "Декабрь" << std::endl;
                break;
          }
            std::cout << std::endl;
        }
        
        
    } while (number != 0);


}
int main()
{
    setlocale(LC_ALL, "Russian");
    ask_for_number_month();
    return 0;
}