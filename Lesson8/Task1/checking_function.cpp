#include "checking_function.h"
int checking_function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) throw bad_length();
	return str.length();
}