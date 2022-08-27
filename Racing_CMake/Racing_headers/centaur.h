#pragma once
#include "land_veachle.h"
namespace Racing {
	class Centaur : public Land_veachle {
	private:
		double pause_time[1];
	public:
		RACING_API Centaur();
		RACING_API double* get_pause_time() override;
		RACING_API int get_pause_time_size() override;
		//RACING_API ~Centaur();
	};
}
