#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: pointer to a string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
