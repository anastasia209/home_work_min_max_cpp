#include <Windows.h>
#include <iostream>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Массив: ";
	int num[10]{ 7, 17, 27, 37, 47, 57, 67, 77, 87, 97 };
	for (int number : num) {
		std::cout << number << " ";
	}
	std::cout << std::endl;
	int min = num [0];
	int max = num [0];
	for (int a = 0; a < 10; a++) {
		if (num[a] < min) {
			min = num[a];
		}
		if (num[a] > max) {
			max = num[a];
		}
	}
	std::cout << "Минимальный элемент: " << min << std::endl;
	std::cout << "Максимальный элемент: " << max << std::endl;


	return 0;
}
