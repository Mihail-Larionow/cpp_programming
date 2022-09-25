#include <iostream>
#include <string>

//Класс мишень
class Target
{
public:
	int r[2], points, center[2];

	//Мишень с радиусами r1 и r2 и минимальным количеством очков - points
	Target(int r1, int r2, int points) {
		this->points = points;
		r[0] = r1;
		r[1] = r2;
		center[0] = rand() % 11 - 5; //Координата центра мишени по оси X в отрезке [-5;5]
		center[1] = rand() % 11 - 5; //Координата центра мишени по оси Y в отрезке [-5;5]
	}
};

//Класс игрок
class Player
{
public:
	int score = 0, shoots = 0; //Количество очков игрока и количество выстрелов

	//Метод выстрела принимающая мишень, x относительно мишени и y относительно мишени
	int Shoot(Target target, int x, int y) {
		shoots++;
		int obstacle = rand() % 3 - 1; //Промах
		for (int i = 0; i < 2; i++)
			//Проверка попадения в мишень
			if ((x + obstacle) * (x + obstacle) + (y + obstacle) * (y + obstacle) <= target.r[i] * target.r[i]) {
				score += target.points * (2 - i);
				return target.points * (2 - i);
			}
		return 0;
	}

	//Метод возвращающий уровень игрока 
	std::string GetRank() {
		switch (shoots / 6) {
			case 0:
				return "Ветеран";
			case 1:
				return "Опытный";
			case 2:
				return "Среднячок";
			default:
				return "Новичок";
		}
	}
};

int main()
{
    system("chcp 1251"); //Устанавливаем кодировку
    Player player; //Создаем игрока
	Target target(3, 5, 5); //Создаем мишень с радиусами 3 и 5 и минимальным количеством очков - 5
    int x, y;

	std::cout << "Стреляйте!\n";
    while (player.score < 50) {
        std::cin >> x >> y; 
		std::cout << player.Shoot(target, x - target.center[0], y - target.center[1]) << " очков\n"; //Вывод количества очков с попадения
    }
	std::cout << "Победа! " << player.shoots << " выстрелов, Ваше звание: " << player.GetRank(); //Вывод количества выстрелов и уровня игрока
}
