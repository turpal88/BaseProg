#include "except_function.h"
void Except_function(int numerator, int denominator) {
	if (denominator == 0 && numerator != 0) throw std::invalid_argument("Невозможно создать дробь со знаменателем, равным нулю!");
	else if (numerator == 0 && denominator != 0) throw std::invalid_argument("Невозможно создать дробь с числителем, равным нулю!");
	else if (numerator == 0 && denominator == 0) throw std::invalid_argument("Невозможно создать дробь с числителем и знаменателями, равными нулю!");
}