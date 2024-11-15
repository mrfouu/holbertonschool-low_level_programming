#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create an array of chars
 * @nmemb : number of element
 * @size : the size on bytes
 *
 * Return: char or "NULL";
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(size * nmemb);
		if (result == NULL)
		{
			free(result);
			return (NULL);
		}

	for (i = 0; i < size * nmemb; i++)
	{
		result[i] = 0;
	}
	return (result);
}
