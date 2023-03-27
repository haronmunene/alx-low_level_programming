#include "main.h"

/**
 * _strlen - a function that returns length of a string
 * @s: the pointer being used
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
