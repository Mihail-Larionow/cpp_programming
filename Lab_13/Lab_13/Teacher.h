#include "human.h"
#include <string>
class Teacher : public Human {
	private:
		// ������� ����
		unsigned int work_time;

		// ����������� ������ teacher
	public:
		Teacher(std::string, std::string, std::string);
		Teacher();
		// ��������� ���������� ������� �����
		unsigned int get_work_time();
		// ���� ��� � ����� ������ �������������
		void set_info();
		// ����� ��� � ����� ������ �������������
		void get_info();
};