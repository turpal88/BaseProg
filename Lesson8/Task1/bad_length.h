#pragma once
#include <iostream>
class bad_length : public std::length_error {

public:
	
	bad_length(const std::string& word);
	
	
	
	

};