#pragma once
#include <iostream>
#include "triangle.h"
#include "quadrilateral.h"
class Except_class : public std::invalid_argument {

public:
	
	Except_class(const std::string& what);
	
};
