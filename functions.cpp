// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>

using namespace std;

//a program that allows that checks if a number is a prime number or not

int main()
{
	//variable declaration
	int num = 0;
	bool YN = true;
	//allow user to enter a value
	cout << "Please enter a number : " << endl;
	cin >> num;
	//introduction of for-loop
	for (int x = 2;x < 10;x++)
	{
	//introduction of nested if statement
		if (num % x == 0 || num % x != 2)
		{
			YN = false;
		}
	
	}
	if (YN == true)
	{
		//display a statement
		cout << "Is a prime number." << endl;
	}
	else
	{
		//display a statement
		cout << "Is not a prime number." << endl;
	}
	_getch();
	return 0;
}