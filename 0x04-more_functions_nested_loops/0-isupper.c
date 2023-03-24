#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character being checked
 * Return: returns 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
