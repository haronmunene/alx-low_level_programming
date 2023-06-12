#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: the destination where n bytes is being copied to
 * @src: the source of n bytes to be copied
 * @n: the value being copied
 *
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
