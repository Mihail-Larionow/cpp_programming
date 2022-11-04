#include "human.h"
#include <string>
#include <vector>
class Student : public Human {
	private:
		// ������ ��������
		std::vector<int> scores;

	public:
		// ������������ ������ Student
		Student(std::string, std::string, std::string);
		Student();
		// ��������� �������� ����� ��������
		float get_average_score();
		// ���� ��� � ������ ��������
		void set_info();
		// ����� ���, ������ � �������� �������� ��������
		void get_info();
};