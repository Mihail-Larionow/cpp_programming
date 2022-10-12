#include <iostream>

//Функция нахождения корней
int MyRoot(double a, double b, double c, double &x1, double &x2) {
    double D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0) {
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        return 0;
    }
    else return 0;
}

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    double x1, x2, a, b, c;

    std::cout << "Пожалуйста, введите коэффициенты a, b и c уравнения вида ax^2+bx+c:\n";
    std::cin >> a >> b >> c;

    int answer = MyRoot(a, b, c, x1, x2);
    if (answer == 1) std::cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2;
    else if (answer == 0) std::cout << "Корни уравнения x1 = x2 = " << x1;
    else std::cout << "Корней уравнения нет";
}
