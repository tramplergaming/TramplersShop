#include "ChangePrice.h"
#include "AddElementToEnd.h"
#include <iostream> 
void ChangePrice()
{
	int id;
	double newPrice = 0;

	do
	{
		std::cout << "������� id ������: ";
		std::cin >> id;
		system("cls");
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\n������� ���� ������: " << nameArr[id - 1] << " = " << priceArr[id - 1];

	do
	{
		std::cout << "\n\n������� ����� ���� ������: ";
		std::cin >> newPrice;
		system("cls");
	} while (newPrice < 0.01 || newPrice > 100000.03);
	priceArr[id - 1] = newPrice;
	std::cout << "��������� ���� ��������� �������\n";
}