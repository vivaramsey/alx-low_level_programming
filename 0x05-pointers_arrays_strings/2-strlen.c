#include "main.h"
/**
 * _strlen - return length of a string
 * @s: string to count length of
 * Return: length of string
*/
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
