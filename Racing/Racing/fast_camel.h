#pragma once
#include "land_veachle.h"
namespace Racing {
	class Fast_camel : public Land_veachle {
	private:
		int pause_time[3];
	public:
		RACING_API Fast_camel();
	};
}
