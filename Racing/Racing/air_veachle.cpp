#include "air_veachle.h"
namespace Racing {
	Air_veachle::Air_veachle(const std::string& name, const int& speed) : Veachle(name, speed, "воздушное") {
	
	}
	
	double Air_veachle::get_reduce_distance_koefficient() {
		return reduce_distance_koefficient;
	}
	
	
}