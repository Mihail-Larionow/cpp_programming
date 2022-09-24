#include <iostream>

//Функция определения является ли номер валдиным
bool IsValid(std::string number)
{
    for (int i = 2; i < 9; i++)
        if (number[i] == number[i - 1] && number[i] == number[i - 2])
            return false;


}


int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    std::string number;

    std::cout << "Пожалуйста, введите номер СНИЛСа:\n";

    std::cin >> number;

    if (IsValid(number)) std::cout << "Номер валидный!\n";
    else std::cout << "Номер не валидный!\n";
}
