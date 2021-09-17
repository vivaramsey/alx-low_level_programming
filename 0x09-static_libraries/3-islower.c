#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character in ASCII
 * Return: 1 for lowercase, 0 for otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
