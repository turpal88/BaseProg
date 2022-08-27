#pragma once
#include "land_veachle.h"
namespace Racing {
	class Fast_camel : public Land_veachle {
	private:
		double pause_time[3];
	public:
		RACING_API Fast_camel();
		RACING_API double* get_pause_time() override;
		RACING_API int get_pause_time_size() override;
		//RACING_API ~Fast_camel();
	};
}
