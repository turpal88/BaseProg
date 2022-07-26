#include "bad_length.h"
#include <iostream>
bad_length::bad_length(const std::string& word) : std::length_error(word) {
	
}

	



