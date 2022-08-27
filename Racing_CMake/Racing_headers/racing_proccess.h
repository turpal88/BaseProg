#pragma once
#include <string>

#include "camel.h"
#include "all_road_shoes.h"
#include "broom.h"
#include "carpet_aircraft.h"
#include "centaur.h"
#include "eagle.h"
#include "fast_camel.h"

namespace Racing {
	class Racing_proccess {
	private:
		const int number_of_veachles = 7;
		int race_type;
		std::string race_names[3] = { "Гонка для наземного транспорта", "Гонка для воздушного транспорта", "Гонка для наземного и воздушного транспорта" };
		double distance;
		
		Camel camel;
		Fast_camel fast_camel;
		All_road_shoes all_road_shoes;
		Centaur centaur;
		Broom broom;
		Carpet_aircraft carpet_aircraft;
		Eagle eagle;
		
		

		struct veachle_park {
			Veachle* veachle;
			bool is_veachle_checked_in;
			
			double race_time;
		};
		veachle_park* all_veachles;
		

	public:
		
		
		RACING_API Racing_proccess();
		RACING_API int get_number_of_veachles();
		RACING_API int get_race_names_size();
		RACING_API std::string* get_race_names();
		RACING_API void set_race_type(const int& race_type);
		RACING_API void set_distance(const double& distance);
		RACING_API int get_race_type();
		RACING_API double get_distance();
		RACING_API Veachle* get_veachle(int i);
		RACING_API bool get_checked_in_status(int i);
		RACING_API void set_is_veachle_checked_in(int i, bool flag);
		
		
		RACING_API void set_race_time(int i, double race_time);
		RACING_API double get_race_time(int i);
		RACING_API void set_default_values(int i);
		RACING_API ~Racing_proccess();
	};
}

