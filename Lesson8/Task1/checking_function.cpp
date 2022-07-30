#include <string>

#include "checking_function.h"
#include "bad_length.h"

int checking_function(std::string str, int forbidden_length) {
	
	if (str.length() == forbidden_length) {
		std::string message = "Вы ввели слово длиной " + std::to_string(str.length()) + " запретной длины! Допустимая длина равна " + std::to_string(forbidden_length) + ". До свидания";
		throw bad_length(message);
	}
	else return str.length();
	
}