#include <iostream>
#include "Human.h"

Human::Human(std::string last_name, std::string name, std::string
	second_name)
{
	this->last_name = last_name;
	this->name = name;
	this->second_name = second_name;
}

Human::Human() {
	this->last_name = "no_last_name";
	this->name = "no_name";
	this->second_name = "no_second_name";
};

void Human::set_info() {
	std::cout << "¬ведите фамилию, им€ и отчество: \n";
	std::cin >> this->last_name >> this->name >> this->second_name;
}

void Human::get_info() {
	std::cout << this->last_name << " " << this->name << " " << this->second_name <<"\n";
}