#include <iostream>
#include <fstream>
#include <string>


int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    std::string poem;

    std::cout << "Пожалуйста, введите Ваше стихотворение: \n\n";
    
    //Открываем файл для записи
    std::ofstream out("test.txt", std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }

    //Считываем строки с пробелами, пока не побадется пустая строка
    while (getline(std::cin, poem)) {
        if (poem.empty()) break;
        out << poem << "\n"; //Записываем строку в файл
    }

    out.close();
}

