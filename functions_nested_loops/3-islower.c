#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: the caracter to be checked
 *Return: 1 if character is lowercase, 0other wise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

