#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

for (r = 0; r <= 9; r++)
{
printf("%d", r);
}
printf("\n");
return (0);
}
#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	putchar(10);
	return (0);
}