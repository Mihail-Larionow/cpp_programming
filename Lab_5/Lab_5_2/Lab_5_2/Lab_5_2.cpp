﻿#include <iostream>

//Функция max_vect
int* max_vect(int n, int a[], int b[]) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = a[i] > b[i] ? a[i] : b[i];
    }
    return arr;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    int* c; //Указатель на результирующий массив
    c = max_vect(kc, a, b); //вызов функции для создания массива
    for (int i = 0; i < kc; i++) //Вывод результата.
        std::cout << c[i] << " ";
    std::cout << "\n";
    delete[]c;
}
