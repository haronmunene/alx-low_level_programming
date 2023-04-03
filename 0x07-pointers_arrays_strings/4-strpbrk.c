#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: pointer to the bytes in 2s or NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;

		}
		s++;
	}
	return ('\0');
}
