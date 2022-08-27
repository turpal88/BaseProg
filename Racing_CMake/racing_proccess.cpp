#include "racing_proccess.h"
namespace Racing {
	
	Racing_proccess::Racing_proccess(): camel(), fast_camel(), all_road_shoes(), centaur(), broom(), carpet_aircraft(), eagle() {
		all_veachles = new veachle_park[number_of_veachles];
		for (int i = 0; i < number_of_veachles; i++) {
			all_veachles[i].is_veachle_checked_in = false;
			
			all_veachles[i].race_time = 0;
		}
		all_veachles[0].veachle = &all_road_shoes;
		

		all_veachles[1].veachle = &broom;
		

		all_veachles[2].veachle = &camel;
		

		all_veachles[3].veachle = &centaur;
		

		all_veachles[4].veachle = &eagle;
		

		all_veachles[5].veachle = &fast_camel;
		

		all_veachles[6].veachle = &carpet_aircraft;
		

		
		
	}

	int Racing_proccess::get_number_of_veachles() {
		return number_of_veachles;
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
	void Racing_proccess::set_distance(const double& distance) {
		this->distance = distance;
	}
	int Racing_proccess::get_race_type() {
		return race_type;
	}
	double Racing_proccess::get_distance() {
		return distance;
	}
	Veachle* Racing_proccess::get_veachle(int i) {
		return all_veachles[i].veachle;
	}
	bool Racing_proccess::get_checked_in_status(int i) {
		return all_veachles[i].is_veachle_checked_in;
	}
	void Racing_proccess::set_is_veachle_checked_in(int i, bool flag) {
		all_veachles[i].is_veachle_checked_in = flag;
	}
	
	
	void Racing_proccess::set_race_time(int i, double race_time) {
		all_veachles[i].race_time = race_time;
	}
	double Racing_proccess::get_race_time(int i) {
		return all_veachles[i].race_time;
	}

	void Racing_proccess::set_default_values(int i) {
		all_veachles[i].race_time = 0.0;
		all_veachles[i].is_veachle_checked_in = false;
		
	}

	Racing_proccess::~Racing_proccess() {
		delete[] all_veachles;
	}
}

