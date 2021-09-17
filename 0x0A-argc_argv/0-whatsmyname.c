#include "main.h"
#include <stdio.h>
/**
 * main - print the file name followed by a new line
 * @argc: argument counter
 * @argv: array of strings passed to main
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

