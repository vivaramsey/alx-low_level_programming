#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive integers
 * @argc: argument counter
 * @argv: argument vector
 * Description: if no arguments, return 0
 * Return: 0 on success, 1 on errors
*/
int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int number;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			number = strtol(argv[i], &p, 10);
			if (!*p)
				sum += number;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
