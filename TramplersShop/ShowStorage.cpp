#include "ShowStorage.h"
#include "AddElementToEnd.h"
#include <iostream>

void ShowStorage()
{
	std::cout << "\nid ������\t��������\t\t\t\t����\t���-��\n\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << idArr[i] << "\t\t" << nameArr[i] << "\t\t\t" << priceArr[i] << "\t" << countArr[i] << "\n";
	}
	std::cout << "\n";
}