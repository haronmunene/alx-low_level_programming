#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to upper case
 *
 * @s: pointer to char
 * Return: pointer to string s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}