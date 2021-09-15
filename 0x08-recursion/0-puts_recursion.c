#include "main.h"
/**
 * _puts_recursion - prints a strings followed by a new line
 * @s: string to ouput
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

