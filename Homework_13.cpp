#include <iostream>
#include "Helpers.h"

int main()
{
	//Присваиваем аргументам a,b значения.
	int Result = SumSquared(2, 4);

	//Выводим результат квадрата суммы аргументов.
	std::cout << "Result = " << Result << std::endl;

	return 0;
}