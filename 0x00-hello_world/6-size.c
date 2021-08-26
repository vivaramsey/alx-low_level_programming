#include <stdio.h>

/**
*main - starts the c programs
*void - return value of main
*return:0 - returns 0 on exiting the program
*/

int main(void)
{
printf("Size of char: %1d byte(s)\n", sizeof(char));
printf("Size of int: %1d byte(s)\n", sizeof(int));
printf("Size of long: %1d byte(s)\n", sizeof(long int));
printf("Size of long long int: %1d byte(s)\n", sizeof(long long int));
printf("Size of float: %1d byte(s)\n", sizeof(float));
return (0);
}
 
