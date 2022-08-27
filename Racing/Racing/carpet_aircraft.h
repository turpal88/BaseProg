#pragma once
#include "air_veachle.h"
namespace Racing {
	class Carpet_aircraft : public Air_veachle {
	
	public:
		RACING_API Carpet_aircraft();
		RACING_API void set_reduce_distance_koefficient(double distance) override;

	};
}
