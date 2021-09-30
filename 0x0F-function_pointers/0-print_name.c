#include "function_pointers.h"
/**
  * print_name - prints a name
  * @name: parameter that function needs
  * @f: void function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
