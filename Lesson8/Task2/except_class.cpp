#include "except_class.h"

#include <iostream>

Except_class::Except_class(const std::string& what) : std::invalid_argument(what) {

}

	
