#include <iostream>

//Структура решения квадратного уравнения
struct Roots {
    double x1, x2;
};

//Функция нахождения корней
Roots Solver(double a, double b, double c, bool &solved) {
    Roots roots;
    double D = b * b - 4 * a * c;

    if (D < 0) solved = false;
    else solved = true;

    roots.x1 = (-b + sqrt(D)) / (2 * a);
    roots.x2 = (-b - sqrt(D)) / (2 * a);

    return roots;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    double a, b, c;
    bool solved;
    Roots roots;

    std::cout << "Пожалуйста, введите коэффициенты a, b и c уравнения вида ax^2+bx+c:\n";
    std::cin >> a >> b >> c;

    roots = Solver(a, b, c, solved);
    if(solved) std::cout << "Корни уравнения: x1 = " << roots.x1 << ", x2 = " << roots.x2 << "\n";
    else std::cout << "Корней уравнения нет\n";

    return 0;
}
