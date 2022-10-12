#include <iostream>
#include <string>

//Функция Input
bool Input(int &a, int &b) {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    
    //Обработчик ошибок
    try
    {
        a = std::stoi(s1); //Перевод строки в целочисленный тип
        b = std::stoi(s2); //Перевод строки в целочисленный тип
    }
    catch (const std::exception& ex)
    {
        return false;
    }
    
    return true;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    
    int a, b;

    std::cout << "Пожалуйста, введите два целых числа: ";

    if (Input(a, b) == false) // if(!Input(a,b))
    {
        std::cerr << "error";
        return 1;
    }

    int s = a + b;
    std::cout << "Их сумма равна: " << s;
}