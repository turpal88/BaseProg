#include "broom.h"
namespace Racing {
	Broom::Broom(const int& distance) : Air_veachle("Метла", 20) {
		if (distance < 1000) reduce_distance_koefficient = 0;
		else reduce_distance_koefficient = static_cast<int>(distance / 1000);
		
	}
}