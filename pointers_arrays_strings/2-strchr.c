#include "main.h"
/**
 * _strchr - locate character
 * @c: retour au caractere c
 * @s: the string
 *
 * Return: the string
 */
char *_strchr(char *s, char c)
{
	int z = 0, a;

	while (s[z])
	{
		z++;
	}

	for (a = 0; a <= z; a++)
	{
		if (c == s[a])
		{
			s += a;
			return (s);
		}
	}

	return ('\0');
}
