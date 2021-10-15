#include "main.h"

/**
 * get_endianness - get endianness
 * Return: 1 if little endianness else 0
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *s = (char *)&n;

	if (*s)
		return (1);
	else
		return (0);
}
