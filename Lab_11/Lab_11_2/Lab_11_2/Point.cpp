#include "Point.h"
#include <ostream>

//Конструктор класса Point()
Point::Point() {
	this->x = 0;
	this->y = 0;
}

//Конструктор класса Point(x, y)
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

//Метод расчета расстояния от центра до точки
double Point::distanceTo(const Point& point) const {
	return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
}

//Перегрузка оператора сравнения <
bool Point::operator< (const Point& point) const  {
	Point start_point;
	if (distanceTo(start_point) < point.distanceTo(start_point)) return true;
	return false;
}

//Перегрузка оператора вывода данных в поток
std::ostream& operator<< (std::ostream& s, Point& point)
{
	s << '(' << point.x << ", " << point.y  << ')';
	return s;
}