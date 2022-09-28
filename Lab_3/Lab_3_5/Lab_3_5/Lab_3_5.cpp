#include <iostream>
#include <string>

//Рекурсивная функция перевода целого числа в двоичный код
std::string F(int n) {
    if (n > 0) return F(n / 2) + std::to_string(n % 2) ;
    else return "";
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    int n;

    std::cout << "Пожалуйста, введите n:\n";
    std::cin >> n;

    std::cout << "F(" << n << ") = " << F(n) << "\n"; //Вывод
}
