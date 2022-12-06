#include <iostream>

//Шаблон фунеции, возвращающей среднее арифметическое всех элементов массива  
template<class T>
double avg(T arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return (double) sum / size;
}

int main()
{
	int int_arr[] = { 9,3,17,6,5,4,31,2,12 }; //Массив целых чисел
	double double_arr[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 }; //Массив вещественных чисел
	char char_arr[] = "Hello, word"; //Массив символов

	std::cout << "int_arr = " << avg(int_arr, sizeof(int_arr) / sizeof(int_arr[0])) << "\n";
	std::cout << "double_arr = " << avg(double_arr, sizeof(double_arr) / sizeof(double_arr[0])) << "\n";
	std::cout << "char_arr = " << avg(char_arr, sizeof(char_arr) / sizeof(char_arr[0])) << "\n";
}

