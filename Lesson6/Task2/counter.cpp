#include "counter.h"
#include <iostream>

Counter::Counter(int value) {
    this->digit = value;
}
int Counter::make_increment() {
    return ++digit;
    
}
int Counter::make_decrement() {
    return --digit;
    
}
int Counter::make_result() {
    return digit;
   
}

