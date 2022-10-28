#include <iostream>
#include "Triangle.h"
#include "Dot.h"
#include <tuple>


int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    double x, y;
    std::cout << "Введите, пожалуйста, координаты x, y для трех точек A, B и C:\na: x, y = ";
    std::cin >> x >> y;
    Dot a(x, y);
    std::cout << "b: x, y = ";
    std::cin >> x >> y;
    Dot b(x, y);
    std::cout << "c: x, y = ";
    std::cin >> x >> y;
    Dot c(x, y);

    Triangle t(a,b,c);

    std::cout << "Получился треугольник со сторонами " << std::get<0>(t.Ribs()) << " ";
    std::cout << std::get<1>(t.Ribs()) << " " << std::get<2>(t.Ribs());
    std::cout << "\nПериметр треугольника P = " << t.P();
    std::cout << "\nПлощадь треугольника S = " << t.S();
}
