#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - ecrire le nom
 * @f: pointeur vers ma fonctions
 * @name: nom
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
