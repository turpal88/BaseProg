#include "centaur.h"
namespace Racing {
	Centaur::Centaur() :Land_veachle("Кентавр", 15, 8) {
		pause_time[0] = 2.0;
	}
	double* Centaur::get_pause_time() {
		return pause_time;
	}
	int Centaur::get_pause_time_size() {
		return sizeof(pause_time) / sizeof(pause_time[0]);
	}
	//Centaur::~Centaur() {}
}