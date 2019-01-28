#include "pch.h"
#include "Factorial.h"
int FactorialFun(int a)
{
	int Fact = 1;
	int i;
	for ( i = 1; i <= a; i++)
	{
		Fact = Fact * i;
	}
	return Fact;
}