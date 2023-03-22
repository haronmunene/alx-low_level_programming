#include "main.h"

/**
 * _isalpha - checks whether c is an alphabet, either in lowercase or uppercase
 * @c: is the character being checked
 * Return: 1 if character is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
