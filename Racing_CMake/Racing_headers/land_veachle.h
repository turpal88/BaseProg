#pragma once
#include "veachle.h"
namespace Racing{
	class Land_veachle :public Veachle {
	private:
		
		
		RACING_API Land_veachle(const std::string& name, const int& speed);
		int time_up_to_pause;
	protected:
		
		RACING_API Land_veachle(const std::string& name, const int& speed, const int& time_up_to_pause);
		
		
	public:
		
		RACING_API int get_time_up_to_pause() override;
		
	};
}