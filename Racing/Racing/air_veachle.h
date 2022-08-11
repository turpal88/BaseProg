#pragma once
#include "veachle.h"
namespace Racing {
	class Air_veachle : public Veachle {
	private:
		
		//RACING_API Air_veachle(const std::string& name, const int& speed);
	protected:
		int reduce_distance_koefficient;
		RACING_API Air_veachle(const std::string& name, const int& speed);
	public:
		std::string get_veachle_name() {
			return name;
		}
	};
}
