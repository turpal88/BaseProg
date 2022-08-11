#pragma once
#include "veachle.h"
namespace Racing{
	class Land_veachle :public Veachle {
	private:
		int time_up_to_pause;
		//int* pause_time;
		RACING_API Land_veachle(const std::string& name, const int& speed);
		
	protected:
		
		RACING_API Land_veachle(const std::string& name, const int& speed, const int& time_up_to_pause);
	public:
		std::string get_veachle_name() {
			return name;
		}
		
	};
}