#pragma once
#include "air_veachle.h"
namespace Racing {
	class Broom : public Air_veachle {
	
	public:
		RACING_API Broom();
		RACING_API void set_reduce_distance_koefficient(double distance) override;
	};
}
