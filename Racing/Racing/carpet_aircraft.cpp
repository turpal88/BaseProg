#include "carpet_aircraft.h"
namespace Racing {
	
	Carpet_aircraft::Carpet_aircraft(const int& distance) : Air_veachle("Ковер-самолет", 10) {
		if (distance < 1000) reduce_distance_koefficient = 0;
		else if (distance < 5000 && distance >= 1000) reduce_distance_koefficient = 0.03;
		else if(distance < 10000 && distance >= 5000) reduce_distance_koefficient = 0.1;
		else reduce_distance_koefficient = 0.5;
	}
}