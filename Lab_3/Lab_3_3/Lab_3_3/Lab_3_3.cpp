#include <iostream>

//Функция вычисления площади треугольника по формуле Герона для равностороннего треугольника
float S_triangle(float a) {
    float p = (float) 3 / 2 * a;
    return (float) sqrt(p * (p - a) * (p - a) * (p - a));
}

//Функция вычисления площади треугольника по формуле Герона для неравнстороннего треугольника
float S_triangle(float a, float b, float c) {
    float p = (float) 1/2*(a+b+c);
    return (float) sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    std::string answer;
    std::cout << "Ваш треугольник равносторонний?\n";
    std::cin >> answer;

    if (answer == "yes") {
        float a; 
        std::cout << "Введите длину стороны треугольника\n";
        std::cin >> a;
        std::cout << "Площадь равностороннего треугольника равна " << S_triangle(a) << "\n"; //Вывод
    }
    else {
        float a, b, c;
        std::cout << "Введите длины сторон треугольника\n";
        std::cin >> a >> b >> c;
        std::cout << "Площадь треугольника равна " << S_triangle(a, b, c) << "\n"; //Вывод
    }
   
}
