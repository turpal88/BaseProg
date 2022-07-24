#pragma once
#include <iostream>
#include "triangle.h"
#include "quadrilateral.h"
class Except_class : public std::exception {
private:
	
	Triangle_Exceptions triangle_exceptions_value;
	Quadrilateral_Exceptions quadrilateral_exceptions_value;
	std::string errors_arr[9]{
	"Причина: сумма углов не равна 180", //SIMPLE_TRIANGLE
	"Причина: Угол С не равен 90 градусов", //RECT_TRIANGLE
	"Причина: Стороны а и с не равны между собой и(или) углы А и С не равны между собой", //EQUAL_SIDE_TRIANGLE
	"Причина: Все стороны не равны между собой и(или) все углы не равны 60", //EQUAL_TRIANGLE
	"Причина: сумма углов не равна 360", //SIMPLE_QUADRILATERAL
	"Причина: Стороны a,c и b,d попарно не равны и(или) все углы не равны 90", //RECTANG
	"Причина: Все стороны не равны между собой и(или) все углы не равны 90", //QUADRO
	"Причина: Стороны a,c и b,d попарно не равны и(или) углы A,C и B,D попарно не равны", //PARALLELOGRAM
	"причина: Все стороны не равны между собой и(или) углы A,C и B,D попарно не равны" //RHOMB
	};
public:
	
	
	Except_class(Triangle_Exceptions value);
	Except_class(Quadrilateral_Exceptions value);
	void select_triangle_what_function();
	void select_quadrilateral_what_function();
	void what_simple_triangle();
	void what_rect_triangle();
	void what_equal_side_triangle();
	void what_equal_triangle();

	void what_simple_quadrilateral();
	void what_rectang();
	void what_quadro();
	void what_parallelogram();
	void what_rhomb();
};
