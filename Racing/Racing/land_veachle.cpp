﻿#include "land_veachle.h"
namespace Racing {
	Land_veachle::Land_veachle(const std::string& name, const int& speed, const int& time_up_to_pause) : Land_veachle(name, speed) {
		this->time_up_to_pause = time_up_to_pause;
		

		
	}
	Land_veachle::Land_veachle(const std::string& name, const int& speed) : Veachle(name, speed, "наземное") {}
	
	//std::string Land_veachle::get_veachle_name() {
	//	return name;
	//}
	//std::string Land_veachle::get_veachle_type() {
	//	return type;
	//}
	int Land_veachle::get_time_up_to_pause() {
		return time_up_to_pause;
	}
}