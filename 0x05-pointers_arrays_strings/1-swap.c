#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: int pointer type
 * @b: int pointer type
 * Description - function to swap values of two integers
*/
void swap_int(int *a, int *b)
{
	int third;

	third = *a;
	*a = *b;
	*b = third;
}
