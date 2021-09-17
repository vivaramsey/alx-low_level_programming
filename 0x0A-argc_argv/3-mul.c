#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 on errors, else 0 on success
*/
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

