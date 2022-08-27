#include "veachle.h"
namespace Racing {
	Veachle::Veachle(const std::string& name, const int& speed, const std::string& type) : name(name), speed(speed), type(type) {}
	int Veachle::get_time_up_to_pause() { return 0; }
	double* Veachle::get_pause_time() { return nullptr; }
	int Veachle::get_pause_time_size() { return 0; }

	double Veachle::get_speed() {
		return speed;
	}

	std::string Veachle::get_veachle_name() {
		return name;
	}
	std::string Veachle::get_veachle_type() {
		return type;
	}
	double Veachle::get_reduce_distance_koefficient() {
		return 0;
	}

	void Veachle::set_reduce_distance_koefficient(double distance) {}
}