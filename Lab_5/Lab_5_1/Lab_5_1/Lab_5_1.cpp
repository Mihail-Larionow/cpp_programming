#include <iostream>

//Сумма элементов массива
int Arr_sum(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        s += Arr[i];
    }
    return s;
}

//Среднее значение элементов массива
float Arr_avg(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        s += Arr[i];
    }
    return (float) s / N;
}

//Сумма положительных элементов массива
int Arr_sum_pos(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if(Arr[i]>0)
            s += Arr[i];
    }
    return s;
}

//Сумма отрицательных элементов массива
int Arr_sum_neg(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] < 0)
            s += Arr[i];
    }
    return s;
}

//Сумма элементов массива с четными индексами
int Arr_sum_even(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            s += Arr[i];
    }
    return s;
}

//Сумма элементов массива с нечетными индексами
int Arr_sum_odd(const int Arr[], const int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 != 0)
            s += Arr[i];
    }
    return s;
}

//Максимальное значение элементов массива
int Arr_max(const int Arr[], const int N)
{
    int max = Arr[0], ind = 0;
    for (int i = 1; i < N; i++)
    {
        if (Arr[i] > max) {
            max = Arr[i];
            ind = i;
        }
    }
    return ind;
}

//Минимальное значение элементов массива
int Arr_min(const int Arr[], const int N)
{
    int min = Arr[0], ind = 0;
    for (int i = 1; i < N; i++)
    {
        if (Arr[i] < min) {
            min = Arr[i];
            ind = i;
        }
    }
    return ind;
}

//Произведение элементов между минимальным и максимальным значениями
int Min_mult_max(const int Arr[], const int N)
{
    int a = Arr_min(Arr, N), b = Arr_max(Arr, N);
    if (a > b) {
        b += a;
        a = b - a;
        b -= a;
    }
    int m = Arr[a];
    for (int i = a + 1; i <= b; i++)
    {
        m *= Arr[i];
    }
    return m;
}

//Сортировка массива по возрастанию
void Sort(int arr[], const int N) {
    for (int i = 0; i < N; i++)
    {
        int min = 0;
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (arr[j] < arr[min]) ? j : min;
        if (i != min)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    const int n = 10;
    int a[n];
    const int n = 10;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> a[i];
    }
    std::cout << "\nArr_sum = " << Arr_sum(a, n) << "\n";
    std::cout << "Arr_avg = " << Arr_avg(a, n) << "\n";
    std::cout << "Arr_sum_pos = " << Arr_sum_pos(a, n) << "\n";
    std::cout << "Arr_sum_neg = " << Arr_sum_neg(a, n) << "\n";
    std::cout << "Arr_sum_even = " << Arr_sum_even(a, n) << "\n";
    std::cout << "Arr_sum_odd = " << Arr_sum_odd(a, n) << "\n";
    std::cout << "Arr_max = " << Arr_max(a, n) << "\n";
    std::cout << "Arr_min = " << Arr_min(a, n) << "\n";
    std::cout << "Min_mult_max = " << Min_mult_max(a, n) << "\n";
    Sort(a, n); //Сортировка массива
    std::cout << "Sorted array: ";
    for (int i : a) 
        std::cout << i << " ";
}