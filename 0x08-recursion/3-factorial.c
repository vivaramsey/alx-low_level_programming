#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: argument used to calc factorial
 * Return: -1 if n < 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}

