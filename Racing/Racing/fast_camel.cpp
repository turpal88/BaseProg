#include"fast_camel.h"
namespace Racing {
	Fast_camel::Fast_camel() :Land_veachle("Верблюд-быстроход", 40, 10) {
		pause_time[0] = 5.0;
		pause_time[1] = 6.5;
		pause_time[2] = 8.0;
	}
	double* Fast_camel::get_pause_time() {
		return pause_time;
	}
	int Fast_camel::get_pause_time_size() {
		return sizeof(pause_time) / sizeof(pause_time[0]);
	}
	//Fast_camel::~Fast_camel() {}
}
