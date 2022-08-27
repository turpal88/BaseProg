#include "broom.h"
namespace Racing {
	Broom::Broom() : Air_veachle("Метла", 20) {
		
		
	}
	void Broom::set_reduce_distance_koefficient(double distance) {
		if (distance < 1000) reduce_distance_koefficient = 0;
		else reduce_distance_koefficient = static_cast<int>(distance / 1000.0) / 100.0;
	}
}