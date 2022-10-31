#include "Time.h"
#include <iostream>

//����������� Time()
Time::Time() {
    this->hours = 0;
    this->minutes = 0;
    this->seconds = 0;
}

//����������� Time(h, m, s)
Time::Time(int hours, int minutes, int seconds) {
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

//����� ������ �������
void Time::Show() {
    std::cout << hours << ":" << minutes << ":" << seconds << "\n";
}

//���������� ��������� �������� ���� Time � ����� Time
Time Time::operator+ (const Time& t) const {
    int s = (seconds + t.seconds) % 60;
    int m = (minutes + t.minutes + (seconds + t.seconds) / 60) % 60;
    int h = (hours + t.hours + (minutes + t.minutes + (seconds + t.seconds) / 60) / 60) % 24;
    return Time(h, m, s);
}

//���������� ��������� �������� ���� Time � ������������ ����� ������
Time Time::operator+ (const double& t) const {
    int b_s = (int)(3600*t);
    int s = (seconds + b_s) % 60;
    int m = (minutes + (seconds + b_s) / 60) % 60;
    int h = (hours + (minutes + (seconds + b_s) / 60) / 60) % 24;
    return Time(h, m, s);
}

//���������� ��������� �������� ������������� ���� ������ � ����� Time
Time operator+(const double& t, const Time& time)
{
    int b_s = (int)(3600 * t);
    int s = (time.seconds + b_s) % 60;
    int m = (time.minutes + (time.seconds + b_s) / 60) % 60;
    int h = (time.hours + (time.minutes + (time.seconds + b_s) / 60) / 60) % 24;
    return Time(h, m, s);
}

//���������� ��������� ��������� <
bool Time::operator< (const Time& t) const {
    if (hours * 3600 + minutes * 60 + seconds < t.hours * 3600 + t.minutes * 60 + t.seconds)
        return true;
    return false;
}

//���������� ��������� ��������� >
bool Time::operator> (const Time& t) const {
    if (hours * 3600 + minutes * 60 + seconds > t.hours * 3600 + t.minutes * 60 + t.seconds)
        return true;
    return false;
}

//���������� ��������� ��������� ==
bool Time::operator== (const Time& t) const {
    if (hours * 3600 + minutes * 60 + seconds == t.hours * 3600 + t.minutes * 60 + t.seconds)
        return true;
    return false;
}

//���������� ��������� ���������
Time Time::operator- (const Time& t) const {
    int s = seconds - t.seconds;
    int m = minutes - t.minutes;
    if (s < 0) {
        m -= (abs(s) / 60 + 1);
        s = 60 + s % 60;
    }
    int h = hours - t.hours;
    if (m < 0) {
        h -= (abs(m) / 60 + 1);
        m = 60 + m % 60;
    }
    if (h < 0) h = 24 + h % 24;
    return Time(h, m, s);
}


