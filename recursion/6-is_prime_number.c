#include "main.h"
/**
 * is_prime_number - prints the prime numbers
 * @n:
 *
 * Return: 0 if 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
/**
 *check_prime - prime numbers
 *@i:je sais pas
 *@n:je sais pas
 *Return: 0
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
