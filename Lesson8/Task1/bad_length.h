#pragma once
#include <iostream>
class bad_length : public std::exception {
public:
	const char* what() const override;
	
	

};