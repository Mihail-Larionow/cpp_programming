#include <iostream>
#include <string>

//Функция определения является ли номер валдиным
bool IsValid(std::string snils)
{
    std::string actual_number = snils.substr(0, 9);
    std::string expected_sum = snils.substr(9, 10);

    int actual_sum = (snils[0] - 48) * 9 + (snils[1] - 48) * 8;

    for (int i = 2; i < 9; i++) {
        actual_sum += (snils[i] - 48) * (9 - i);
        if (snils[i] == snils[i - 1] && snils[i] == snils[i - 2])
            return false;
    }
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
    std::string number;

    std::cout << "Пожалуйста, введите номер СНИЛСа:\n";

    std::cin >> number;

    if (IsValid(number)) std::cout << "Номер валидный!\n";
    else std::cout << "Номер не валидный!\n";
}
