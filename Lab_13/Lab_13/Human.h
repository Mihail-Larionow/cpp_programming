#include <string>
#include <sstream>

#pragma once /* Защита от двойного подключения заголовочного файла */
class Human
{
	private:
		std::string name; // имя
		std::string last_name; // фамилия
		std::string second_name; // отчество
		std::string info; //Какая-то информация

	public:
		// Конструктор класса human
		Human(std::string, std::string, std::string); 
		Human();
		// Ввод ФИО человека
		virtual void set_info();
		// Вывод ФИО человека
		virtual void get_info();
};

