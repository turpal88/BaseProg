#pragma once
#include "veachle.h"
namespace Racing {
	class Air_veachle : public Veachle {
	private:
		
		
	protected:
		double reduce_distance_koefficient;
		
		RACING_API Air_veachle(const std::string& name, const int& speed);
		
	public:
		RACING_API double get_reduce_distance_koefficient() override;
		
			
	};
}
