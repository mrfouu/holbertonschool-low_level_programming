#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int chab = 0, dest_chab = 0;

	while (dest[chab++])
		dest_chab++;

	for (chab = 0; src[chab] && chab < n; chab++)
		dest[dest_chab++] = src[chab];

	return (dest);
}
