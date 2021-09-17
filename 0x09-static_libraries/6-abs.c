#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @i: input should be an integer
 * Return: Always 0 (Success)
*/
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
