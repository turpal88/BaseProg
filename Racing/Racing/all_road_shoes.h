#pragma once
#include "land_veachle.h"
namespace Racing {
	class All_road_shoes : public Land_veachle {
	private:
		int pause_time[2];
	public:
		RACING_API All_road_shoes();
	};
}