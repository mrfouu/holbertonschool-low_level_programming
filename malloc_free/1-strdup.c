#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * @str: string
 * Return: array
 */

char *_strdup(char *str)
{
	int i = 0;
	char *array = malloc((i + 1) * sizeof(char));

	if (str == NULL || array == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	for (; i >= 0; i--)
		array[i] = str[i];
	return (array);
}
