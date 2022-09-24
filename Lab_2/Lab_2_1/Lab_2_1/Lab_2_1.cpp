#include <iostream>

//Функция определения является ли число простым
bool IsPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
//Функция определения является ли число суперпростым
bool IsSuperPrime(int n) {
    int id = 0; //Порядковый номер простого числа
    if (IsPrime(n)) {
        for (int i = 1; i <= n; i++)
        {
            if (IsPrime(i)) id++;
        }
        return IsPrime(id);
    }
    return IsPrime(n);
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    int x;

    std::cout << "Пожалуйста, введите число:\n";

    while (std::cin >> x) {
        if (IsSuperPrime(x)) std::cout << "Число " << x << " является суперпростым! Хотите ли Вы проверить еще число?\n"; //Вывод данных в поток
        else std::cout << "Число " << x << " не является суперпростым! Хотите ли Вы проверить еще число?\n"; //Вывод данных в поток
    }
    std::cout << "Проверка окончена!\n";
}