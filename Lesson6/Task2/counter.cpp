#include "counter.h"
#include <iostream>

Counter::Counter(int value) {
    this->digit = value;
}
void Counter::make_increment() {
    std::cout << ++digit << std::endl;
}
void Counter::make_decrement() {
    std::cout << --digit << std::endl;
}
void Counter::make_result() {
    std::cout << digit << std::endl;
}
void Counter::make_quit() {
    std::cout << "До свидания!" << std::endl;
}
