#include "ChangeStorage.h"
#include "AddElementToEnd.h"
#include "DeleteElementByIndex.h"
#include <iostream>
void ChangeStorage()
{
	int choose;
	do
	{
		std::cout << "��������� ������. \n1- �������� ����� �����\n2 - ������� �����\n\n";
		std::cin >> choose;
	} while (choose < 1 || choose > 3);
	if (choose == 1)
	{
		AddElementToEnd();
	}
	else if (choose == 2)
	{
		DeleteElementByIndex();
	}
	else if (choose == 3)
	{
		std::cout << "�����";
	}

}