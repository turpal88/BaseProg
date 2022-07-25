#include "checking_function.h"
#include "bad_length.h"
#include <iostream>
std::string message = "Вы ввели слово запретной длины! До свидания";
int checking_function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) throw bad_length(message);
	return str.length();
}