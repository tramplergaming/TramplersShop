#include "Start.h"
#include "CreateStorage.h"
#include "ShowStorage.h"
#include "Shop.h"
#include "AddElementToEnd.h"
#include <iostream>
#include <string>

void Start()
{
	std::string adminLogin = "medelyan";
	std::string adminPassword = "antkeytothe42";
	std::string login, password;
	bool exit = false;
	int choose;

	std::cout << "\n\t\t\t����� ���������� � Trampler's shop!\n\n";

	do
	{
		CreateStorage();
		std::cout << "\n������� �����: ";
		std::getline(std::cin, login);

		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "������� ������: ";
		std::getline(std::cin, password);
		std::cout << "\n";
		system("cls");

		if (login != adminLogin || password != adminPassword)
		{
			std::cerr << "�������� ����� � ������\n\n";
			std::cout << "����������� ��� ���? \n1 - ��, \n2 - ����� �� ���������\n";
			std::cout << "����: ";
			std::cin >> choose;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			if (choose == 2)
			{
				exit = true;
			}
		}
		else
		{
			exit = true;
			int chooseStorageType;
			do
			{
				std::cout << "�������� ������ ������: \n1 - ������� �����\n2 - ������� ����� �������\n\n";
				std::cout << "����: ";
				std::cin >> chooseStorageType;
				system("cls");
			} while (chooseStorageType < 1 || chooseStorageType > 2);
			if (chooseStorageType == 1)
			{
				CreateStorage();
				ShowStorage();
				Shop();
			}
			else if (chooseStorageType == 2)
			{
				std::cout << "� ����������\n\n";
			}
			else
			{
				std::cerr << "Error chooseStorageType";
			}
		}

	} while (!exit);
	delete[]idArr;
	delete[]nameArr;
	delete[]countArr;
	delete[]priceArr;
	delete[]nameReceiptArr;
	delete[]countReceiptArr;
	delete[]priceReceiptArr;
}