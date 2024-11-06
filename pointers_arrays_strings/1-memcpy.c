#include "main.h"
/**
*_memcpy - copy fill
*@n: byte from memory
*@dest: dest to memory area
*@src: source
*Return: memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
