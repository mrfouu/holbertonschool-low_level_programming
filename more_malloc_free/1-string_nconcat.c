#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Entry point
 * @s1: string 1
 * @s2: string 2
 * @n: longueur demander
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	if (n < size2)
		size2 = n;
	result = malloc(size1 + size2 + 1);
	if (result == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < size2; i++)
	{
		result[i + size1] = s2[i];
	}

	result[size1 + i] = '\0';
	return (result);
}
