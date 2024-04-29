#include "ShowStorage.h"
#include "AddElementToEnd.h"
#include <iostream>

void ShowStorage()
{
	std::cout << "\nid товара\tНазвание\t\t\t\tЦена\tКол-во\n\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << idArr[i] << "\t\t" << nameArr[i] << "\t\t\t" << priceArr[i] << "\t" << countArr[i] << "\n";
	}
	std::cout << "\n";
}