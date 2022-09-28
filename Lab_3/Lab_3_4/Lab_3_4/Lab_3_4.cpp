#include <iostream>

//Рекурсивная функция суммы ряда
int F(int n) {
    if (n > 1) return 5 * n + F(n - 1);
    else return 5;
    
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    int n;

    std::cout << "Пожалуйста, введите n:\n";
    std::cin >> n; 

    std::cout << "F(" << n << ") = " << F(n) << "\n"; //Вывод
}
