﻿#include <iostream>

//Метод вычисления кубического корня
float Cubrt(int a) {
    if (a == 0) return 0; //Проверка является ли число нулем
    int sign = 1; 
    if (a < 0) { //Проверка является ли число отрицательным
        a = abs(a); 
        sign *= -1;
    }
    float* x = new float[a+1]; //Создаем массив из a+1 элементов
    x[0] = 1; //Первый кубический корень - корень из 1, то есть 1
    for (int i = 1; i < a+1; i++) x[i] = (float) 1 / 3 * (a / (x[i - 1] * x[i - 1]) + 2 * x[i - 1]); //Итерационная формула
    return x[a]*sign;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    int a; 
    std::cin >> a;
    
    std::cout << "pow(a, 1.0/3): " << pow(a, 1.0 / 3) << "\n"; //Вывод
    std::cout << "Итерационная формула: " << Cubrt(a) << "\n"; //Вывод
}
