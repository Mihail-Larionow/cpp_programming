#include <iostream>
#include <tuple>

//Структура решения квадратного уравнения
struct Roots {
    double x1, x2;
};

//Функция нахождения корней
std::tuple<bool, Roots> Solver(double a, double b, double c) {
    Roots roots;
    bool solved;
    double D = b * b - 4 * a * c;

    if (D < 0) solved = false;
    else solved = true;

    roots.x1 = (-b + sqrt(D)) / (2 * a);
    roots.x2 = (-b - sqrt(D)) / (2 * a);

    return std::make_tuple(solved, roots);
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    std::tuple<bool, Roots> t;
    double a, b, c;

    std::cout << "Пожалуйста, введите коэффициенты a, b и c уравнения вида ax^2+bx+c:\n";
    std::cin >> a >> b >> c;

    t = Solver(a, b, c);

    if (std::get<0>(t)) std::cout << "Корни уравнения: x1 = " << std::get<1>(t).x1 << ", x2 = " << std::get<1>(t).x2 << "\n";
    else std::cout << "Корней уравнения нет\n";

    return 0;
}