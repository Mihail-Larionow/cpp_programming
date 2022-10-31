#include <math.h>
#include <ostream>

#pragma once
class Point
{
	private:
		double x, y;

	public:
		Point();
		Point(double, double);
		double distanceTo(const Point&) const;
		bool operator< (const Point&) const;
		friend std::ostream& operator<< (std::ostream&, Point&);
};

