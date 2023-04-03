#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer to a value
 * @b: constant value
 * @n: the bytes of memory to be filled
 *
 * Return: returns a pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
