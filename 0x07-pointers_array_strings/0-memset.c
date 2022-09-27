#include "main.h"

/**
 * *_memset - fills block of memory
 * @s: starting address
 * @b: value
 * @n: number of bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
