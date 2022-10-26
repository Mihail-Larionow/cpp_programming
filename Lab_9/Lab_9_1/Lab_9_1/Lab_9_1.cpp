#include <iostream>

//Класс исключения недопустимой длины стороны треугольника
class BadTriangleError {
    public:
        BadTriangleError() : message("Недопустимая длина") { }
        void printMessage() const { std::cout << message << "\n"; }
    private:
        std::string message;
};

//Структура Time
class Triangle {
    public:

        float a, b, c;

        Triangle(float a, float b, float c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        
        float S() {
            if (a > b + c || b > a + c || c > a + b) throw BadTriangleError();
            float p = (float)1 / 2 * (a + b + c);
            return (float)sqrt(p * (p - a) * (p - b) * (p - c));
        }
};

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    float a, b, c;

    std::cout << "Введите, пожалуйста, длины трех сторон:\n";
    std::cin >> a >> b >> c;

    Triangle t(a, b, c);

    //Обработчик исключений
    try {
        std::cout << "Площадь треугольника: " << t.S();
    }
    catch(BadTriangleError& ex) {
        std::cout << "ОШИБКА: ";
        ex.printMessage();
        return 1;
    }

    return 0;
}
