#pragma once
#include "land_veachle.h"
namespace Racing {
	class Camel :public Land_veachle {
	private:
		double pause_time[2];
		
	public:
		RACING_API Camel();
		RACING_API double* get_pause_time() override;
		RACING_API int get_pause_time_size() override;
		
	};
}
