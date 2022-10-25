#include <iostream>

//Структура Time
struct Time {
    int hours;
    int minutes;
    int seconds;

    //Перевод времени в секунды
    int DataTime() {
        return seconds + minutes * 60 + hours * 3600;
    }
};

//Функция суммы интервалов времени
Time SumTime(Time t1, Time t2) {
    Time t;
    t.seconds = (t1.seconds + t2.seconds) % 60;
    t.minutes = (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) % 60;
    t.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) / 60;
    return t;
}

//Функция разности интервалов времени
Time SubTime(Time t1, Time t2) {
    Time t;
    
    t.seconds = t1.seconds - t2.seconds;
    t.minutes = t1.minutes - t2.minutes;
    if (t.seconds < 0) {
        t.minutes -= (abs(t.seconds) / 60 + 1);
        t.seconds = 60 + t.seconds % 60;
    }
    t.hours = t1.hours - t2.hours;
    if (t.minutes < 0) {
        t.hours -= (abs(t.minutes) / 60 + 1);
        t.minutes = 60 + t.minutes % 60;
    }
    return t;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    Time time1, time2, time;

    std::cout << "Введите, пожалуйста, время в формате часы, минуты, секунды: \n";
    std::cin >> time1.hours >> time1.minutes >> time1.seconds;
    std::cout << "Введите, пожалуйста, еще время: \n";
    std::cin >> time2.hours >> time2.minutes >> time2.seconds;
    std::cout << "\n";
    std::cout << "time1: " << time1.DataTime() << " секунд\n";
    std::cout << "time2: " << time2.DataTime() << " секунд\n\n";
    time = SumTime(time1, time2);
    std::cout << "Прибавляем time2 к time1:\nчасов: " << time.hours << "\nминут: " << time.minutes << "\nсекунд: " << time.seconds << "\n\n";
    if (time1.DataTime() >= time2.DataTime()) {
        time = SubTime(time1, time2);
        std::cout << "Вычитаем time2 из time1:\nчасов: " << time.hours << "\nминут: " << time.minutes << "\nсекунд: " << time.seconds << "\n\n";
    }
    else{
        time = SubTime(time2, time1);
        std::cout << "Вычитаем time1 из time2:\nчасов: " << time.hours << "\nминут: " << time.minutes << "\nсекунд: " << time.seconds << "\n\n";
    }

    return 0;
}
