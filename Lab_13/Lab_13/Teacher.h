#include "human.h"
#include <string>
class Teacher : public Human {
	private:
		// Учебные часы
		unsigned int work_time;

		// Конструктор класса teacher
	public:
		Teacher(std::string, std::string, std::string);
		Teacher();
		// Получение количества учебных часов
		unsigned int get_work_time();
		// Ввод ФИО и часов работы преподавателя
		void set_info();
		// Вывод ФИО и часов работы преподавателя
		void get_info();
};