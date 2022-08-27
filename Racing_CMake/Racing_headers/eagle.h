#pragma once
#include "air_veachle.h"
namespace Racing {
	class Eagle : public Air_veachle {
		
	public:
		RACING_API Eagle();
		RACING_API void set_reduce_distance_koefficient(double distance) override;
	};
}