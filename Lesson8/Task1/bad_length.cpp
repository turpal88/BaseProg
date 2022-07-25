#include "bad_length.h"
#include <iostream>
bad_length::bad_length(const std::string& what) : std::length_error(what) {

}
	



