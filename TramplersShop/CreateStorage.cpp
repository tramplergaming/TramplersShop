#include "CreateStorage.h"
#include "FillArray.h"
#include "AddElementToEnd.h"
#include <iostream>
#include <string>
void CreateStorage()
{
	const int staticSize = 10;
	int id[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
	std::string name[staticSize]{ "������ �� Fury Dragon", "����� Razor\t", "�����������\t", "PS5\t\t",
	"�������� Beyerdinamyc", "������ �� Cooler Master", "������MSIGeforceRTX4070", "������� �� ASUS\t",
	"������� JBL Charge 5", "XiaomiBlackshark5" };
	int count[staticSize]{ 5,10,8,15,2,4,1,6,18,3 };
	double price[staticSize]{ 150000, 5400, 30000, 62000, 20000, 8000, 70000, 25000, 12000, 42000 };
	FillArray(id, idArr, staticSize);
	FillArray(name, nameArr, staticSize);
	FillArray(count, countArr, staticSize);
	FillArray(price, priceArr, staticSize);

	//PrintArray(idArr, staticSize);
	//PrintArray(nameArr, staticSize);
	//PrintArray(countArr, staticSize);
	//PrintArray(priceArr, staticSize);
}