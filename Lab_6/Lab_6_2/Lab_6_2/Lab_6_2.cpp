#include <iostream>
#include <fstream>


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
    system("chcp 1251"); //Устанавливаем кодировку

    const int n = 10;
    int a[n];

    //Открываем файл для записи
    std::ofstream out("test.txt", std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> a[i];
        out << a[i] << " "; //Записываем элемент в файл
    }
    out << "\n";

    Sort(a, n); //Сортировка массива

    //Еще раз проходим массив
    for (int i = 0; i < n; i++)
    {
        out << a[i] << " "; //Записываем элемент в файл
    }

    out.close();
}

