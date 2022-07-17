#include <iostream>
#include <cmath>
#include "make_math_operations.h"
float make_math(float num1, float num2, int operation_index) {
	
		switch (operation_index) {
		case 1: {
			std::cout << num1 << " + " << num2 << " = ";
			return num1 + num2;
			break;
		}
		case 2: {
			std::cout << num1 << " - " << num2 << " = ";
			return num1 - num2;
			break;
		}
		case 3: {
			std::cout << num1 << " * " << num2 << " = ";
			return num1 * num2;
			break;
		}
		case 4: {
			std::cout << num1 << " / " << num2 << " = ";
			return num1 / num2;
			break;
		}
		case 5: {
			std::cout << num1 << " в степени " << num2 << " = ";
			return pow(num1, num2);
			break;
		}

		}
	
	
}