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
			std::cout << "1) Показать склад\n";
			std::cout << "2) Начать продажу\n";
			std::cout << "3) Изменить цену\n";
			std::cout << "4) Списать товар\n";
			std::cout << "5) Пополнить склад\n";
			std::cout << "6) Изменение склада\n";
			std::cout << "0) Закончить смену\n\n";
			std::cout << "Ввод: ";
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