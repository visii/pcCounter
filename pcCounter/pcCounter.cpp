// pcCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "counters.h"

void printCount(int x)
{
	std::cout << x << " ";
}

int counter(int x)
{
	printCount(x);
	x = x + 1;
	counter1(x);
	return x;
}

int counter1(int x)
{
	printCount(x);
	x = x + 1;
	counter2(x);
	return x;
}

int counter2(int x)
{
	printCount(x);
	x = x + 1;
	counter3(x);
	return x;
}

int counter3(int x)
{
	printCount(x);
	x = x + 1;
	counter4(x);
	return x;
}

int counter4(int x)
{
	printCount(x);
	x = x + 1;
	counter5(x);
	return x;
}

int counter5(int x)
{
	printCount(x);
	x = x + 1;
	counter6(x);
	return x;
}

int counter6(int x)
{
	printCount(x);
	x = x + 1;
	counter7(x);
	return x;
}

int counter7(int x)
{
	printCount(x);
	x = x + 1;
	counter8(x);
	return x;
}

int counter8(int x)
{
	printCount(x);
	x = x + 1;
	counter9(x);
	return x;
}

int counter9(int x)
{
	printCount(x);
	std::cout << "Yay I can count to " << x << "! ";
	x = x + 1;
	counter(x);
	return x;
}


int main()
{
	counter(1);
	return 0;
}
