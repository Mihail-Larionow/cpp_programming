#pragma once
class Time
{
	private:
		int hours, minutes, seconds;
	public:
		Time();
		Time(int, int, int);
		void Show();
		Time operator+ (const Time&) const;
		Time operator+ (const double&) const;
		friend Time operator+ (const double&, const Time&);
		bool operator< (const Time&) const;
		bool operator> (const Time&) const;
		bool operator== (const Time&) const;
		Time operator- (const Time&) const;
		
};

