#include "user_interconnection.h"
namespace Racing {
	void hello_user() {
		std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	}
	Racing_proccess create_race() {
		Racing_proccess race;
		return race;
	}
	void cout_races_names(Racing_proccess& race) {
		for (int i = 0; i < race.get_race_names_size(); i++) {
			std::cout << i + 1 << ". " << race.get_race_names()[i] << std::endl;
		}
	}
	
	void input_race_type(Racing_proccess& race) {
		int type = 0;
		std::cout << "Выберите тип гонки: ";
		std::cin >> type;
		race.set_race_type(type);
	}
	void input_distance(Racing_proccess& race) {
		int distance = 0;
		do {
			std::cout << "Укажите длину дистанции (должна быть положительна): ";
			std::cin >> distance;
			if (distance <= 0) std::cout << "Введите корректную длину дистанции (положительное значение)!" << std::endl;
		} while (distance <= 0);
			race.set_distance(distance);
		
		
	}
	
}