#include "user_interconnection.h"
namespace Racing {
	void hello_user() {
		std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	}
	
	void cout_races_names(Racing_proccess& race) {
		for (int i = 0; i < race.get_race_names_size(); i++) {
			std::cout << i + 1 << ". " << race.get_race_names()[i] << std::endl;
		}
	}
	
	void input_race_type(Racing_proccess& race) {
		int type = 0;
		do {
			std::cout << "Выберите тип гонки: ";
			std::cin >> type;
			if (type > static_cast<int>(race.get_race_names_size()) || type <= 0) std::cout << "Введите корректное значение!" << std::endl;
			else break;
		} while (true);
		race.set_race_type(type-1);
	}
	void input_distance(Racing_proccess& race) {
		double distance = 0;
		do {
			std::cout << "Укажите длину дистанции (должна быть положительна): ";
			std::cin >> distance;
			if (distance <= 0.0) std::cout << "Введите корректную длину дистанции (положительное значение)!" << std::endl;
			else break;
		} while (true);
			race.set_distance(distance);
		
		
	}
	
	void check_in_veachles(Racing_proccess& race) {
		int stack_place_value = 1;
		
		int checked_in_status = 0;
		int value = 0;
		struct Veachles_stack {
			bool checked_in_flag;
			int stack_place;
		};
		Veachles_stack veachles_stack[7];
		
		for (int i = 0; i < race.get_number_of_veachles(); i++) {
			veachles_stack[i].checked_in_flag = false;
			veachles_stack[i].stack_place = 0;
			
		}
		
		do {
			
			for (int i = 0; i < race.get_number_of_veachles(); i++) {
				if (race.get_checked_in_status(i)) checked_in_status++;
			}
			if (checked_in_status < 2) std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
			std::cout << "1. Зарегистрировать транспорт" << std::endl;
			if (checked_in_status >= 2) std::cout << "2. Начать гонку" << std::endl;
			do {

				std::cout << "Выберите действие: ";
				std::cin >> value;
				if (value == 1 || value == 2 && checked_in_status >= 2) break;
				else std::cout << "Введите корректное значение!" << std::endl;

			} while (true);
			std::cout << '\n' << '\n';

			if (static_cast<int>(value) == 2) break;
			else if (static_cast<int>(value) == 1) {

				do {
					checked_in_status = 0;
					for (int i = 0; i < race.get_number_of_veachles(); i++) {
						if (veachles_stack[i].checked_in_flag == true && !race.get_checked_in_status(i)) {
							if (race.get_veachle(i)->get_veachle_type() == "наземное" && race.get_race_type() == 0 || race.get_race_type() == 2
								|| race.get_veachle(i)->get_veachle_type() == "воздушное" && race.get_race_type() == 1 || race.get_race_type() == 2)
							{
								race.set_is_veachle_checked_in(i, true);
								
								std::cout << race.get_veachle(i)->get_veachle_name() << " успешно зарегистрирован!" << std::endl;
								veachles_stack[i].checked_in_flag = false;
								veachles_stack[i].stack_place = stack_place_value;
								stack_place_value++;
							}
							else {
								std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl;
								veachles_stack[i].checked_in_flag = false;
							}

						}
						else if (veachles_stack[i].checked_in_flag == true && race.get_checked_in_status(i)) {
							std::cout << race.get_veachle(value - 1)->get_veachle_name() << " уже зарегистрирован!" << std::endl;
							veachles_stack[i].checked_in_flag = false;
						}
					}
					std::cout << race.get_race_names()[race.get_race_type()] << ". " << "Расстояние: " << race.get_distance() << '\n';


					for (int i = 0; i < race.get_number_of_veachles(); i++) {
						if (race.get_checked_in_status(i)) checked_in_status++;
					}
					
					

					if (checked_in_status > 0) {
						
						int k = 0;
						int temp = 1;
						std::cout << "Зарегистрированные транспортные средства: ";
						
						do {
							
							for (int i = 0; i < race.get_number_of_veachles(); i++) {
								if (veachles_stack[i].stack_place == temp) {
									if (race.get_checked_in_status(i)) {
										k++;
										std::cout << race.get_veachle(i)->get_veachle_name();
										temp++;
										if (k < checked_in_status) std::cout << ", "; else std::cout << std::endl;
										
									}
								}
								continue;

							}
						} while (temp <= stack_place_value - 1);
						
					}
						for (int i = 0; i < race.get_number_of_veachles(); i++) {
							std::cout << i + 1 << ". " << race.get_veachle(i)->get_veachle_name() << std::endl;
						}
						std::cout << 0 << ". " << "Закончить регистрацию" << std::endl;
						std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";

						std::cin >> value;
						for (int i = 0; i < race.get_number_of_veachles(); i++) {
							if (static_cast<int>(value) == i + 1) {

								veachles_stack[i].checked_in_flag = true;
								
							}
						}
						std::cout << '\n' << '\n';
					

					} while (value != 0);

				}


			} while (true);






		}
    
	void print_race_result(Racing_proccess& race) {
		
		int checked_in_status = 0;
		
		int count_of_taking_part_in_race_veachles = 0;
		for (int i = 0; i < race.get_number_of_veachles(); i++) {
			if (race.get_checked_in_status(i)) checked_in_status++;
		}
		int* arr_of_race_time = new int[checked_in_status];
		for (int i = 0; i < race.get_number_of_veachles(); i++) {
			if (race.get_checked_in_status(i)) {
				arr_of_race_time[count_of_taking_part_in_race_veachles] = i;
				count_of_taking_part_in_race_veachles++;
			}
		}
		
		for (int i = 0; i < checked_in_status - 1; i++) {
			for (int j = i + 1; j < checked_in_status; j++) {
				if (race.get_race_time(arr_of_race_time[i]) > race.get_race_time(arr_of_race_time[j])) {
					int temp = arr_of_race_time[i];
					arr_of_race_time[i] = arr_of_race_time[j];
					arr_of_race_time[j] = temp;
				}
			}
		}
		std::cout << "Результаты гонки:" << std::endl;
		
		for (int i = 0; i < checked_in_status; i++) {
			
			
				std::cout << i + 1 << ". " << race.get_veachle(arr_of_race_time[i])->get_veachle_name() << ". " << "Время: " << race.get_race_time(arr_of_race_time[i]) << std::endl;
				
			
		}
		for (int i = 0; i < race.get_number_of_veachles(); i++) {
			race.set_default_values(i);
		}
		delete[] arr_of_race_time;
	}
	void move_race(Racing_proccess& race) {

		for (int i = 0; i < race.get_number_of_veachles(); i++) {
			double race_time = 0;
			if (race.get_checked_in_status(i)) {
				
				if (race.get_veachle(i)->get_veachle_type() == "наземное") {
					race_time = race.get_distance() / race.get_veachle(i)->get_speed();
					int pause_count = race_time / race.get_veachle(i)->get_time_up_to_pause(); 
					int addition_time = 0;
					for (int j = 0; j < race.get_veachle(i)->get_pause_time_size(); j++) {
						addition_time += race.get_veachle(i)->get_pause_time()[j]; 
						pause_count--; 
					}
					for (int k = 0; k < pause_count; k++) {
						addition_time += race.get_veachle(i)->get_pause_time()[race.get_veachle(i)->get_pause_time_size() - 1];
					}
					race_time += addition_time;
				}
				else if (race.get_veachle(i)->get_veachle_type() == "воздушное") {
					race.get_veachle(i)->set_reduce_distance_koefficient(race.get_distance());
					race_time = (race.get_distance() * (1 - race.get_veachle(i)->get_reduce_distance_koefficient())) / race.get_veachle(i)->get_speed();
				}
				race.set_race_time(i, race_time);
			}

			
		}
		

	}

	}