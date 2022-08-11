#pragma once
#include "land_veachle.h"
namespace Racing {
	class Camel :public Land_veachle {
	private:
		int pause_time[2];
		//RACING_API Camel(const int* pause_time);
	public:
		RACING_API Camel();

	};
}
