#include <iostream>
#include <vector>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
	system("chcp 1251"); //Устанавливаем кодировку

	Human* people[3];

	std::cout << "Введите информацию о трех человеках";
	for(int i=0; i<3; i++){
		std::cout << "Вы хотите добавить информацию о Преподавателе или об Ученике? (0 или 1)\n";
		bool gender;
		std::cin >> gender;
		if (gender) {
			people[i] = new Student();
		}
		else {
			people[i] = new Teacher();
		}
		people[i]->set_info();
	}

	// Вывод информации о людях в массиве
	for (int i = 0; i < 3; i++) {
		std::cout << "\n";
		people[i]->get_info();
	}
	return 0;
}