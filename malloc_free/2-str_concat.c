#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	result = malloc((size1 + size2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (; i <= (size1 + size2); i++)
	{
		if (i < size1)
			result[i] = s1[i];
		else
			result[i] = s2[i - (size1)];
	}
	result[i] = '\0';
	return (result);
}
