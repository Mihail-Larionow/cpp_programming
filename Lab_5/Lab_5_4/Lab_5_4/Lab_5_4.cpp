#include <iostream>


int sumOfTwoNumbers(int a, int b) {
	return a + b;
}

int productOfTwoNumbers(int a, int b) {
	return a * b;
}


int main(int argc, const char *argv[])
{
	system("chcp 1251"); //Устанавливаем кодировку

	if (argc != 4) {
		std::cout << "Введите, пожалуйста, данные в виде: nameProg -f a1 a2.\n";
		return 1;
	}
	if(strncmp(argv[1], "-a", 2) == 0)
		std::cout << sumOfTwoNumbers(atoi(argv[2]), atoi(argv[3])) << "\n";
	else if(strncmp(argv[1], "-m", 2) == 0)
		std::cout << productOfTwoNumbers(atoi(argv[2]), atoi(argv[3])) << "\n";
	else
		std::cout << "В качестве параметра, пожалуйста, используйте -a или -m.\n";
	return 0;
}
