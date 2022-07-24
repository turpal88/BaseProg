#pragma once
#include <iostream>
class Figure {



protected:
    Figure(int side_count, const std::string& figure_name = "Фигура");
    int field;
    std::string figure_name;
public:
    Figure();
    virtual void get_positive_info();
    virtual void get_negative_info();

    
};
