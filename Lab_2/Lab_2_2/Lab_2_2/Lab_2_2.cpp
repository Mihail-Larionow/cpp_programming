#include <iostream>
#include <string>

//Функция для преобразования номера снилса
std::string NumberAdapter(std::string number) {
    return number.substr(0, 3) + number.substr(4, 3) + number.substr(8, 3);
}

//Функция определения является ли номер валидным
bool IsValid(std::string actual_number, std::string expected_sum)
{
    int actual_sum = (actual_number[0] - 48) * 9 + (actual_number[1] - 48) * 8; 

    //Проверка номера
    for (int i = 2; i < 9; i++) {
        actual_sum += (actual_number[i] - 48) * (9 - i);
        if (actual_number[i] == actual_number[i - 1] && actual_number[i] == actual_number[i - 2])
            return false;
    }

    //Проверка контрольной суммы
    switch (actual_sum % 101) {
        case 0:
            if(expected_sum == "00") return true;
            break;
        case 100:
            if (expected_sum == "00") return true;
            break;
        default:
            if (std::stoi(expected_sum) == actual_sum % 101) return true;
            break;
    }
    return false;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    std::string number, sum;

    std::cout << "Пожалуйста, введите номер Вашего СНИЛСа:\n";

    std::cin >> number >> sum;

    if (IsValid(NumberAdapter(number), sum)) std::cout << "Номер валидный!\n";
    else std::cout << "Номер не валидный!\n";
}
