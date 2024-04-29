#include "Shop.h"
#include "ShowStorage.h"
#include "Selling.h"
#include "ChangePrice.h"
#include "RemoveFromStorage.h"
#include "AddToStorage.h"
#include "ChangeStorage.h"
#include <iostream>
void Shop()
{
	while (true)
	{
		int choose;
		do
		{
			std::cout << "1) �������� �����\n";
			std::cout << "2) ������ �������\n";
			std::cout << "3) �������� ����\n";
			std::cout << "4) ������� �����\n";
			std::cout << "5) ��������� �����\n";
			std::cout << "6) ��������� ������\n";
			std::cout << "0) ��������� �����\n\n";
			std::cout << "����: ";
			std::cin >> choose;
			system("cls");
		} while (choose < 0 || choose > 6);
		if (choose == 1)
		{
			ShowStorage();
		}
		else if (choose == 2)
		{
			Selling();
		}
		else if (choose == 3)
		{
			ChangePrice();
		}
		else if (choose == 4)
		{
			RemoveFromStorage();
		}
		else if (choose == 5)
		{
			AddToStorage();
		}
		else if (choose == 6)
		{
			ChangeStorage();
		}
		else if (choose == 0)
		{
			break;
		}
		else
		{
			std::cout << "Error";
		}
	}
}