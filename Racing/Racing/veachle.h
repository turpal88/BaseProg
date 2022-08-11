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
		int speed;
	
		//RACING_API Veachle(): type("Неопределенное"), name("Безымянное"), speed(0) {}
		RACING_API Veachle(const std::string& name, const int& speed, const std::string& type);

	};
}
