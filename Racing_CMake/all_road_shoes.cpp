#include "all_road_shoes.h"
namespace Racing {
	All_road_shoes::All_road_shoes() :Land_veachle("Ботинки-вездеходы", 6, 60) {
		pause_time[0] = 10.0;
		pause_time[1] = 5.0;
	}
	double* All_road_shoes::get_pause_time() {
		return pause_time;
	}
	int All_road_shoes::get_pause_time_size() {
		return sizeof(pause_time) / sizeof(pause_time[0]);
	}
}