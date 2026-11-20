/*﻿******************************
* Автор:   Чупин Артем         *
* Задание: Обработка массивов  *
* Вариант: 31                  *
*******************************/

#include <iostream>

using namespace std;

int main() {
	const int rowsCount = 3;
	const int columnsCount = 3;
	bool positiveRowFound = false;
	int C[rowsCount][columnsCount];
	int countOfPositive = 0;
	int countOfNegative = 0;
	int sumOfEven = 0;

	cout << "Enter matrix elements (" << rowsCount << "x" << columnsCount << "):" << endl;
	for (int rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
		for (int columnIndex = 0; columnIndex < columnsCount; ++columnIndex) {
			cout << "C[" << rowIndex << "][" << columnIndex << "] = ";
			cin >> C[rowIndex][columnIndex];
		}
	}

	cout << "Matrix:" << endl;
	for (int rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
		for (int columnIndex = 0; columnIndex < columnsCount; ++columnIndex) {
			cout << C[rowIndex][columnIndex] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
		countOfPositive = 0;
		countOfNegative = 0;
		sumOfEven = 0;

		for (int columnIndex = 0; columnIndex < columnsCount; ++columnIndex) {
			if (C[rowIndex][columnIndex] >= 0) {
				++countOfPositive;
			} else {
				++countOfNegative;
			}
		}
		if (countOfPositive > countOfNegative) {
			positiveRowFound = true;
			for (int columnIndex = 0; columnIndex < columnsCount; ++columnIndex) {
				if (C[rowIndex][columnIndex] % 2 == 0) {
					sumOfEven += C[rowIndex][columnIndex];
				}
			}
			cout << "Row " << rowIndex + 1 << ": sum of even = " << sumOfEven << endl;
		}
	}
	if (!positiveRowFound) {
		cout << "No even in positive rows";
	}
}
