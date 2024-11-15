#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min : min value
 * @max : max value
 *
 * Return: int or "NULL";
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[n] = i;
		n++;
	}
	return (ptr);
}
