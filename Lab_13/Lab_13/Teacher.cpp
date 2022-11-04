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
	std::cout << "������� ���������� ������� �����: ";
	std::cin>> work_time;
}

void Teacher::get_info() {
	std::cout << "������������� ";
	Human::get_info();
	std::cout << "���������� �����: " << get_work_time() << "\n";
}