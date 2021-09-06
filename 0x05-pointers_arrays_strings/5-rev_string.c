#include "main.h"
/**
 * rev_string - reverses the string
 * @s: string to reverse
*/
void rev_string(char *s)
{
	char rev;
	int x, y, z;

	for (x = 0; s[x] != '\0'; x++)
		;

	z = x;
	for (x--, y = 0; y < z / 2; x--, y++)
	{
		rev = s[y];
		s[y] = s[x];
		s[x] = rev;
	}
}
