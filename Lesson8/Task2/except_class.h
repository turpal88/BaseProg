#pragma once
#include <iostream>
class Except_class : public std::invalid_argument {

public:
	
	Except_class(const std::string& what);
	
};
