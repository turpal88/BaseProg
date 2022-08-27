#pragma once
#include <string>
#ifdef RACING_EXPORTS
#define RACING_API __declspec(dllexport)
#else
#define RACING_API __declspec(dllimport)
#endif
namespace Racing {
	class Veachle {
	protected:
		std::string type;
		std::string name;
		double speed;
		
		
		RACING_API Veachle(const std::string& name, const int& speed, const std::string& type);
		
	public:
		RACING_API std::string get_veachle_name();
		RACING_API std::string get_veachle_type();
		RACING_API virtual int get_time_up_to_pause();
		RACING_API virtual double* get_pause_time();
		RACING_API virtual int get_pause_time_size();
		RACING_API double get_speed();
		RACING_API virtual double get_reduce_distance_koefficient();
		RACING_API virtual void set_reduce_distance_koefficient(double distance);
		//RACING_API virtual int* get_pause_time() = 0;
		//RACING_API virtual int get_pause_time_size() = 0;
		

	};
}
