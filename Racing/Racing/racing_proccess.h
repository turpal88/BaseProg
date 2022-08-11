#pragma once
#include <string>
#include "veachle.h"
namespace Racing {
	class Racing_proccess {
	private:
		int race_type;
		std::string race_names[3] = { "Гонка для наземного транспорта", "Гонка для воздушного транспорта", "Гонка для наземного и воздушного транспорта" };
		int distance;

		//Existed_veachle partisipants[7];
	public:
		RACING_API Racing_proccess();
		RACING_API int get_race_names_size();
		RACING_API std::string* get_race_names();
		RACING_API void set_race_type(const int& race_type);
		RACING_API void set_distance(const int& distance);
	};
}

