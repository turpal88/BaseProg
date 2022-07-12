

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
class address {
private:
    std::string City;
    std::string Street;
    int house_num;
    int flat_num;
public:
    address() {
        City = " ";
        Street = " ";
        house_num = 0;
        flat_num = 0;
    }
    address(std::string City_name, std::string Street_name, int house_num_value, int flat_num_value) {
       City = City_name;
       Street = Street_name;
       house_num = house_num_value;
        flat_num = flat_num_value;
    }
   
    std::string one_line_address() {

        return City + ", " + Street + ", " + std::to_string(house_num) + ", " + std::to_string(flat_num);

    }

};
int main()
{
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N = 0;
    
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    if (fin.is_open()) {
        fin >> N;
        std::string City = " ";
        std::string Street = " ";
        int house_num = 0;
        int flat_num = 0;
        
        address* arr = new address[N];
        fout.open("out.txt");
        if (fout.is_open()) {
            fout << N << std::endl;
            for (int i = 0; i < N; i++) {

                fin >> City;
                fin >> Street;
                fin >> house_num;
                fin >> flat_num;
                arr[i] = address(City, Street, house_num, flat_num);
               
                
            }
            for (int i = N-1; i >= 0; i--) {
                fout << arr[i].one_line_address() << std::endl;
            }
        }
        else {
            std::cout << "Не удалось открыть выходной файл" << std::endl;
            return -1;
        }
        fin.close();
        fout.close();
        delete[] arr;
    }
    else {
        std::cout << "Не удалось открыть входной файл" << std::endl;
        return -1;
    }
    
    
    return 0;
}

