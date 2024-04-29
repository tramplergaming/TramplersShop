#include "Selling.h"
#include "AddElementToReceipt.h"
#include "PrintReceipt.h"
#include "AddElementToEnd.h"
#include <iostream>
void Selling()
{
	int chooseId, chooseCount, confirm;
	bool isFirst = true;
	while (true)
	{

		do
		{
			std::cout << "\nВведите id товара для покупки: ";
			std::cin >> chooseId;
			system("cls");
			if (chooseId < 1 || chooseId > size)
			{
				std::cerr << "Нет такого Id\n";
				continue;
			}
			if (countArr[chooseId - 1] > 0)
			{
				while (true)
				{
					std::cout << "\nВы выбрали: " << nameArr[chooseId - 1] << "\n";
					std::cout << "\nКол-во товара на складе: " << countArr[chooseId - 1];
					std::cout << "\n\nВыберите кол-во товара для покупки: ";
					std::cin >> chooseCount;
					if (chooseCount < 1 || chooseCount > countArr[chooseId - 1])
					{
						std::cerr << "Товара не хватает\n";
						continue;
					}
					else
					{
						break;
					}
				}
			}
			else
			{
				std::cerr << "Этого товара нет на складе\n";
				continue;
			}



			std::cout << "\nВы выбрали: " << nameArr[chooseId - 1] << "\n";
			std::cout << "\nВ количестве: " << chooseCount << "\n";
			std::cout << "\nПодтвердите выбор:\n1 - подтвердить\n2 - отмена\n";
			std::cout << "Ввод: ";
			std::cin >> confirm;
			system("cls");

			if (confirm == 1)
			{
				if (isFirst)
				{
					isFirst = false;
					nameReceiptArr[receiptSize - 1] = nameArr[chooseId - 1];
					countReceiptArr[receiptSize - 1] = chooseCount;
					priceReceiptArr[receiptSize - 1] = priceArr[chooseId - 1] * chooseCount;
					countArr[chooseId - 1] -= chooseCount;
				}
				else if (!isFirst)
				{
					AddElementToReceipt(receiptSize, chooseId, chooseCount);
				}
			}

			std::cout << "Купить еще 1 товар? ";
			std::cout << "\n1 - Да\n2 - Нет\nВаш выбор: ";
			std::cin >> confirm;
			system("cls");
			if (confirm == 1)
			{
				continue;
			}
			break;
		} while (true);
		PrintReceipt();
		system("pause");
		break;
		//Сделать скидки
		//Вывести итого с учётом скидок

		//totalSum;
	}
}