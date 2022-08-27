#include "camel.h"
namespace Racing {
	
	Camel::Camel() :Land_veachle("Верблюд", 10, 30) {
		pause_time[0] = 5.0;
		pause_time[1] = 8.0;
		
	}

	double* Camel::get_pause_time() {
		return pause_time;
	}
	int Camel::get_pause_time_size() {
		return sizeof(pause_time) / sizeof(pause_time[0]);
	}
	
}