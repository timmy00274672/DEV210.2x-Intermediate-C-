// DEV210.2x Intermediate C++.cpp: 主要專案檔。

#include "stdafx.h"
#include <iostream>
using namespace std;

void PassByValue(int);
void PassByRef(int*);
int main() {
	/// for quiz 1-15
	int num1 = 3;
	int *pNum = &num1;

	*pNum = 5;
	PassByValue(num1);
	cout << "main after PassByValue (" << num1 << ")" << endl;
	PassByRef(pNum);
	cout << "main after PassByRef, *pNum (" << *pNum << ")" << endl;

	/// for quiz 17-23
	double *pDouble = new double;
	*pDouble = 12.3;
	printf("in main, *Double created by memory allocate, value = %f\n", *pDouble);
	delete pDouble; //Deallocate the memory for that variable.
	printf("in main, *after deallocate, value = %f\n", *pDouble);


	return 0;
}

void PassByValue(int num) {
	cout << "in PassByValue (" << num << ")" << endl;
	num++;
}

void PassByRef(int* num) {
	cout << "in PassByRef (" << *num << ")" << endl;
	*num = 50;
}
