#pragma once
#include "racing_proccess.h"
#include <iostream>
namespace Racing {
	void hello_user();
	Racing_proccess create_race();
	void cout_races_names(Racing_proccess& race);
	
	void input_race_type(Racing_proccess& race);
	void input_distance(Racing_proccess& race);
}
