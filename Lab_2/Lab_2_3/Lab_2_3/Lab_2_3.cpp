#include <iostream>

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    int denomination[4] = { 10,5,2,1 }, count_d[4] = { 0,0,0,0 }; //Массив номинала и количества каждой монеты
    std::string title[4] = { "ей", "ей", "я", "ю" };
    int value; 

    std::cout << "Пожалуйста, введите сумму:\n";
    std::cin >> value;

    //Жадный алгоритм
    int i = 0;
    int count = 0;
    while (value > 0) {
        if (value - denomination[i] < 0) i++;
        else {
            value -= denomination[i];
            count_d[i]++;
            count++;
        }
    }

    //Вывод
    std::cout << "Итого, потребуется " << count << " монет,\nА именно:\n";
    for (i = 0; i < 4; i++)
        if (count_d[i] != 0)
            std::cout << count_d[i] << " по " << denomination[i] << " рубл" << title[i] << "\n";
}
