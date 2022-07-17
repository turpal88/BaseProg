#pragma once
class Figure {

private:
    int field;

protected:
    Figure(int side_count);

public:
    Figure();
    virtual void get_info();

    int get_side_count();
};
