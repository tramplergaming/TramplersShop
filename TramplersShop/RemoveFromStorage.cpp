#include "RemoveFromStorage.h"
#include "AddElementToEnd.h"
#include <iostream>
void RemoveFromStorage()
{
	int id;
	double goodCount = 0;

	do
	{
		std::cout << "������� id ������: ";
		std::cin >> id;
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\n������� ���������� ������: " << nameArr[id - 1] << " = " << countArr[id - 1];

	do
	{
		std::cout << "\n\n������� ������� ������ �� ������?: ";
		std::cin >> goodCount;
		system("cls");
	} while (goodCount > countArr[id - 1]);
	countArr[id - 1] -= goodCount;
	std::cout << "�������� ������ ��������� �������\n";
}