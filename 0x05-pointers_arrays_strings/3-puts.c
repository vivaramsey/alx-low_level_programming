#include "main.h"
/**
 * _puts - prints output to stdout
 * @str: string to output
 * Description - prints text to stdout
*/
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
