#include "ChangePrice.h"
#include "AddElementToEnd.h"
#include <iostream> 
void ChangePrice()
{
	int id;
	double newPrice = 0;

	do
	{
		std::cout << "Введите id товара: ";
		std::cin >> id;
		system("cls");
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\nТекущая цена товара: " << nameArr[id - 1] << " = " << priceArr[id - 1];

	do
	{
		std::cout << "\n\nВведите новую цену товара: ";
		std::cin >> newPrice;
		system("cls");
	} while (newPrice < 0.01 || newPrice > 100000.03);
	priceArr[id - 1] = newPrice;
	std::cout << "Изменение цены произошло успешно\n";
}