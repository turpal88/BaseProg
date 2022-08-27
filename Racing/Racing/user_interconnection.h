#pragma once
#include "racing_proccess.h"

#include "camel.h"
#include "all_road_shoes.h"
#include "broom.h"
#include "carpet_aircraft.h"
#include "centaur.h"
#include "eagle.h"
#include "fast_camel.h"
#include <iostream>
namespace Racing {
	void hello_user();
	void cout_races_names(Racing_proccess& race);
	void input_race_type(Racing_proccess& race);
	void input_distance(Racing_proccess& race);
	void check_in_veachles(Racing_proccess& race);
	void move_race(Racing_proccess& race);
	void print_race_result(Racing_proccess& race);
	
}
