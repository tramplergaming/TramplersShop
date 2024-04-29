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
			std::cout << "\n������� id ������ ��� �������: ";
			std::cin >> chooseId;
			system("cls");
			if (chooseId < 1 || chooseId > size)
			{
				std::cerr << "��� ������ Id\n";
				continue;
			}
			if (countArr[chooseId - 1] > 0)
			{
				while (true)
				{
					std::cout << "\n�� �������: " << nameArr[chooseId - 1] << "\n";
					std::cout << "\n���-�� ������ �� ������: " << countArr[chooseId - 1];
					std::cout << "\n\n�������� ���-�� ������ ��� �������: ";
					std::cin >> chooseCount;
					if (chooseCount < 1 || chooseCount > countArr[chooseId - 1])
					{
						std::cerr << "������ �� �������\n";
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
				std::cerr << "����� ������ ��� �� ������\n";
				continue;
			}



			std::cout << "\n�� �������: " << nameArr[chooseId - 1] << "\n";
			std::cout << "\n� ����������: " << chooseCount << "\n";
			std::cout << "\n����������� �����:\n1 - �����������\n2 - ������\n";
			std::cout << "����: ";
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

			std::cout << "������ ��� 1 �����? ";
			std::cout << "\n1 - ��\n2 - ���\n��� �����: ";
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
		//������� ������
		//������� ����� � ������ ������

		//totalSum;
	}
}