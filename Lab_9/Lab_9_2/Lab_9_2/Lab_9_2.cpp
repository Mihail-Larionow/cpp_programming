#include <iostream>

//Класс исключения неверных данных
class BadValueError {
public:
    BadValueError() : message("Неверные данные") { }
    void printMessage() const { std::cout << message << "\n"; }
private:
    std::string message;
};

//Структура Time
class Time {
public:
    int hours, minutes, seconds;

    //Конструктор Time()
    Time() {
        this->hours = 0;
        this->minutes = 0;
        this->seconds = 0;
    }

    //Конструктор Time(h, m, s)
    Time(int hours, int minutes, int seconds) {
        if (hours > 23 || minutes > 59 || seconds > 59) throw BadValueError();
        if (hours < 0 || minutes < 0 || seconds < 0) throw BadValueError();
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    //Метод вывода времени
    void Show() {
        std::cout << hours << ":" << minutes << ":" << seconds << "\n";
    }

    //Метод сложения двух интервалов времени
    void Sum(Time t1, Time t2) {
        seconds = (t1.seconds + t2.seconds) % 60;
        minutes = (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) % 60;
        hours = (t1.hours + t2.hours + (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) / 60) % 24;
    }
};

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    int h, m, s;

    //Обработчик исключений
    try {
        std::cout << "Введите, пожалуйста, время в формате часы, минуты, секунды:\n";
        std::cin >> h >> m >> s;
        Time time1(h, m, s);
        std::cout << "time1: ";
        time1.Show();
        std::cout << "Введите, пожалуйста, еще время:\n";
        std::cin >> h >> m >> s;
        Time time2(h, m, s);
        std::cout << "time2: ";
        time2.Show();
        std::cout << "\n";
        Time time3;
        time3.Sum(time1, time2);
        std::cout << "Прибавляем time2 к time1: ";
        time3.Show();
    }
    catch (BadValueError& ex) {
        std::cout << "ОШИБКА: ";
        ex.printMessage();
        return 1;
    }
    

    return 0;
}
