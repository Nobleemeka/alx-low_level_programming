#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that uses a function pointer to print name.
 * @name: argument of function.
 * @f: argument of function.
 * Return: Always 0 (success)
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
	{
f(name);
	}
}
