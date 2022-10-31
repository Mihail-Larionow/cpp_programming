#include "Point.h"
#include <ostream>

//����������� ������ Point()
Point::Point() {
	this->x = 0;
	this->y = 0;
}

//����������� ������ Point(x, y)
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

//����� ������� ���������� �� ������ �� �����
double Point::distanceTo(const Point& point) const {
	return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
}

//���������� ��������� ��������� <
bool Point::operator< (const Point& point) const  {
	Point start_point;
	if (distanceTo(start_point) < point.distanceTo(start_point)) return true;
	return false;
}

//���������� ��������� ������ ������ � �����
std::ostream& operator<< (std::ostream& s, Point& point)
{
	s << '(' << point.x << ", " << point.y  << ')';
	return s;
}