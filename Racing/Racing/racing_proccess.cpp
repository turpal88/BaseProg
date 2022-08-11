#include "racing_proccess.h"
namespace Racing {
	Racing_proccess::Racing_proccess() {

	}
	int Racing_proccess::get_race_names_size() {
		return sizeof(race_names) / sizeof(race_names[0]);
	}
	std::string* Racing_proccess::get_race_names() {
		return race_names;
	}
	void Racing_proccess::set_race_type(const int& race_type) {
		this->race_type = race_type;
	}
	void Racing_proccess::set_distance(const int& distance) {
		this->distance = distance;
	}
}
