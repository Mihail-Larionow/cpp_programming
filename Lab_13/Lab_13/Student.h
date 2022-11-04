#include "human.h"
#include <string>
#include <vector>
class Student : public Human {
	private:
		// Оценки студента
		std::vector<int> scores;

	public:
		// Конструкторы класса Student
		Student(std::string, std::string, std::string);
		Student();
		// Получение среднего балла студента
		float get_average_score();
		// Ввод ФИО и оценок студента
		void set_info();
		// Вывод ФИО, оценок и среднего значения студента
		void get_info();
};