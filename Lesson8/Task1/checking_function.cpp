#include "checking_function.h"
#include "bad_length.h"
#include <iostream>

int checking_function(std::string str, int forbidden_length) {
	
	if (str.length() == forbidden_length) throw bad_length("Вы ввели слово запретной длины! До свидания");
	else return str.length();
	
}