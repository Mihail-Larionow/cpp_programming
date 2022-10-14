#include <iostream>

//Функция поиск с методом транспозиции
int Transposition_search(int arr[], const int N, int key) {
    if (arr[0] == key) return 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] == key) {
            std::swap(arr[i], arr[i-1]);
            return i;
        }
    }
    return -1;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    const int n = 10;
    int a[n], x;

    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> a[i];
    }

    std::cout << "Введите искомое число: ";
    while (std::cin >> x) {
        int ind = Transposition_search(a, n, x);
        std::cout << "Позиция элемента " << x << " в массиве: " << ind << "\n";
        std::cout << "Введите новое число: ";
        if (!ind) break;
    }

    std::cout << "Конечный вид массива: ";
    for (int i : a)
        std::cout << i << " ";
}
