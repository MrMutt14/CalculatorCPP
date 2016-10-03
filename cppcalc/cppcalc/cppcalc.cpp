// cppcalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double sum;
	int op;
	cout << "Enter the first number: \n";
	cin >> a;
	cout << "Enter the second number: \n";
	cin >> b;
	cout << "Enter the operator(+ = 1,- = 2,* = 3,/ = 4): \n";
	cin >> op;
	if (op == 1) 
	{
		sum = a + b;		
	}
	if (op == 2)
	{
		sum = a - b;		
	}
	if (op == 3)
	{
		sum = a * b;		
	}
	if (op == 4)
	{
		sum = a / b;		
	}
	cout << sum << endl;
	system("pause");
    return 0;
}

