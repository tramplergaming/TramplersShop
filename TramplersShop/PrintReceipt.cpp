#include "PrintReceipt.h"
#include "AddElementToEnd.h"
#include <iostream>
void PrintReceipt()
{
	std::cout << "\n��������\t\t\t\t����\t���-��\n\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << nameReceiptArr[i] << "\t\t\t" << priceReceiptArr[i] << "\t" << countReceiptArr[i] << "\n";
	}
}