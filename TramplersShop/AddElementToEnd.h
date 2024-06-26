#ifndef ADDELEMENTTOEND_H
#define ADDELEMENTTOEND_H
#include <string>
//Размеры
int size = 10;
int receiptSize = 1;
// Глобальные массивы склада

int* idArr = new int[size];
std::string* nameArr = new std::string[size];
int* countArr = new int[size];
double* priceArr = new double[size];

// Глобальные массивы чека
std::string* nameReceiptArr = new std::string[receiptSize];
int* countReceiptArr = new int[receiptSize];
double* priceReceiptArr = new double[receiptSize];
void AddElementToEnd();
#endif