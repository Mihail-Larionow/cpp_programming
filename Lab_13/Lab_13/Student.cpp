#include "Student.h"
#include "human.h"
#include <string>
#include <vector>
#include <iostream>

Student::Student(std::string last_name, std::string name, std::string
	second_name) : Human(last_name, name, second_name) {
}

Student::Student() : Human() {}

float Student::get_average_score()
{
	// ����� ���������� ������
	int count_scores = this->scores.size();
	// ����� ���� ������ ��������
	int sum_scores = 0;
	// ������� ����
	float average_score;
	for (unsigned int i = 0; i < count_scores; ++i) {
		sum_scores += this->scores[i];
	}
	average_score = (float)sum_scores / (float)count_scores;
	return average_score;
}

void Student::set_info() {
	Human::set_info();
	std::cout << "������� 10 ��������� ������: ";
	int score;
	for (int i = 0; i < 10; i++) {
		std::cin >> score;
		scores.push_back(score);
	}
}

void Student::get_info() {
	std::cout << "������� ";
	Human::get_info();
	std::cout << "������: ";
	for (int i = 0; i < scores.size(); i++) {
		std::cout << scores[i] << " ";
	}
	std::cout << "\n������� ��������: " << get_average_score() << "\n";
}