#include "AddToStorage.h"
#include "AddElementToEnd.h"
#include <iostream>
void AddToStorage()
{
	int id;
	int goodCount = 0;

	do
	{
		std::cout << "������� id ������: ";
		std::cin >> id;
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\n\n������� ���������� ������: " << nameArr[id - 1] << " = " << countArr[id - 1];

	do
	{
		std::cout << "\n\n������� �������� ������?: ";
		std::cin >> goodCount;
		system("cls");
	} while (goodCount < 0);
	countArr[id - 1] += goodCount;
	std::cout << "���������� ������ ��������� �������\n";
}