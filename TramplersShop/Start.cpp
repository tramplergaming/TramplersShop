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

	std::cout << "\n\t\t\tДобро пожаловать в Trampler's shop!\n\n";

	do
	{
		CreateStorage();
		std::cout << "\nВведите логин: ";
		std::getline(std::cin, login);

		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Введите пароль: ";
		std::getline(std::cin, password);
		std::cout << "\n";
		system("cls");

		if (login != adminLogin || password != adminPassword)
		{
			std::cerr << "Неверный логин и пароль\n\n";
			std::cout << "Попробовать еще раз? \n1 - Да, \n2 - Выход из программы\n";
			std::cout << "Ввод: ";
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
				std::cout << "Выберите формат склада: \n1 - Готовый склад\n2 - Создать склад вручную\n\n";
				std::cout << "Ввод: ";
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
				std::cout << "В разработке\n\n";
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