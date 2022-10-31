#include <iostream>
#include "Time.h"

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    int h, m, s;
    double x;

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
        time3 = time1 + time2;
        std::cout << "Прибавляем time2 к time1:\ntime3: ";
        time3.Show();

        Time time4;
        time4 = time1 - time2;
        std::cout << "Вычитаем time2 из time1:\ntime4: ";
        time4.Show();

        std::cout << "\nВведите количество часов, которое Вы хотите добавить к time1:\nx: ";
        std::cin >> x;
        Time time5;
        time5 = time1 + x;
        std::cout << "time5 = time1 + " << x <<": "; 
        time5.Show();

        Time time6;
        time6 = x + time1;
        std::cout << "time6 = " << x << " + time1: ";
        time6.Show();

        bool b = time1 > time2;
        std::cout << "\ntime1 > time2: " << b << "\n";
        b = time3 < time4;
        std::cout << "time3 < time4: " << b << "\n";
        b = time5 == time6;
        std::cout << "time5 == time6: " << b << "\n";

    }
    catch (std::string ex) {
        std::cout << ex;
        return 1;
    }

    return 0;
}
