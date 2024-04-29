#include "AddToStorage.h"
#include "AddElementToEnd.h"
#include <iostream>
void AddToStorage()
{
	int id;
	int goodCount = 0;

	do
	{
		std::cout << "Введите id товара: ";
		std::cin >> id;
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\n\nТекущее количество товара: " << nameArr[id - 1] << " = " << countArr[id - 1];

	do
	{
		std::cout << "\n\nСколько добавить товара?: ";
		std::cin >> goodCount;
		system("cls");
	} while (goodCount < 0);
	countArr[id - 1] += goodCount;
	std::cout << "Добавление товара произошло успешно\n";
}