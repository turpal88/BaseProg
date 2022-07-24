#include "except_class.h"
#include "triangle.h"
#include "quadrilateral.h"
Except_class::Except_class(Triangle_Exceptions value) : triangle_exceptions_value(value) {
	
}

Except_class::Except_class(Quadrilateral_Exceptions value) : quadrilateral_exceptions_value(value) {

}

void Except_class::select_triangle_what_function() {
	switch (triangle_exceptions_value) {
	case Triangle_Exceptions::SIMPLE_TRIANGLE :
		what_simple_triangle();
		break;
	case Triangle_Exceptions::EQUAL_SIDE_TRIANGLE :
		what_equal_side_triangle();
		break;
	case Triangle_Exceptions::EQUAL_TRIANGLE:
		what_equal_triangle();
		break;
	case Triangle_Exceptions::RECT_TRIANGLE:
		what_rect_triangle();
		break;
	}
}
void Except_class::select_quadrilateral_what_function() {
	switch (quadrilateral_exceptions_value) {
	case Quadrilateral_Exceptions::SIMPLE_QUADRILATERAL:
		what_simple_quadrilateral();
		break;
	case Quadrilateral_Exceptions::PARALLELOGRAM:
		what_parallelogram();
		break;
	case Quadrilateral_Exceptions::QUADRO:
		what_quadro();
		break;
	case Quadrilateral_Exceptions::RECTANG:
		what_rectang();
		break;
	case Quadrilateral_Exceptions::RHOMB:
		what_rhomb();
		break;
	}
}
void Except_class::what_simple_triangle() {


	std::cout << errors_arr[0] << std::endl << std::endl;
}
void Except_class::what_rect_triangle() {
	//std::cout << errors_arr[0] << std::endl;
	std::cout << errors_arr[1] << std::endl << std::endl;
}
	
void Except_class::what_equal_side_triangle() {
	//std::cout << errors_arr[0] << std::endl;
	std::cout << errors_arr[2] << std::endl << std::endl;
}
void Except_class::what_equal_triangle() {
	//std::cout << errors_arr[0] << std::endl;
	std::cout << errors_arr[3] << std::endl << std::endl;
}
	

void Except_class::what_simple_quadrilateral() {


	std::cout << errors_arr[4] << std::endl << std::endl;
}
void Except_class::what_rectang() {


	//std::cout << errors_arr[4] << std::endl;
	std::cout << errors_arr[5] << std::endl << std::endl;
}
void Except_class::what_quadro() {


	//std::cout << errors_arr[4] << std::endl;
	std::cout << errors_arr[6] << std::endl << std::endl;
}
void Except_class::what_parallelogram() {


	//std::cout << errors_arr[4] << std::endl;
	std::cout << errors_arr[7] << std::endl << std::endl;
}
void Except_class::what_rhomb() {


	//std::cout << errors_arr[4] << std::endl;
	std::cout << errors_arr[8] << std::endl << std::endl;
}
	
