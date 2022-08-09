#include "figure.h"
Figure::Figure(int side_count) : field(side_count) {}
Figure::Figure() : field(0) {}
void Figure::get_info() {

}
int Figure::get_side_count() {
    return field;
}