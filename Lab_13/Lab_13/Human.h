#include <string>
#include <sstream>

#pragma once /* ������ �� �������� ����������� ������������� ����� */
class Human
{
	private:
		std::string name; // ���
		std::string last_name; // �������
		std::string second_name; // ��������
		std::string info; //�����-�� ����������

	public:
		// ����������� ������ human
		Human(std::string, std::string, std::string); 
		Human();
		// ���� ��� ��������
		virtual void set_info();
		// ����� ��� ��������
		virtual void get_info();
};

