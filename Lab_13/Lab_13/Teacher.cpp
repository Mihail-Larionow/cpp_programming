#include <iostream>
#include "Teacher.h"

Teacher::Teacher(std::string last_name, std::string name, std::string second_name) : Human(last_name, name, second_name){}
Teacher::Teacher() : Human() {};


unsigned int Teacher::get_work_time()
{
	return this->work_time;
}

void Teacher::set_info() {
	Human::set_info();
	std::cout << "Введите количество рабочих часов: ";
	std::cin>> work_time;
}

void Teacher::get_info() {
	std::cout << "Преподаватель ";
	Human::get_info();
	std::cout << "Количество часов: " << get_work_time() << "\n";
}