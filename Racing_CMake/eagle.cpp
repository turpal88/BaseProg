#include "eagle.h"
namespace Racing {
	Eagle::Eagle() :Air_veachle("Орел", 8) {
		

	}
	void Eagle::set_reduce_distance_koefficient(double distance) {
		reduce_distance_koefficient = 0.06;
	}
}