#pragma once

class Dot
{
	double x;
	double y;

public:
	Dot();
	Dot(double x, double y);
	double distanceTo(Dot point);
};
