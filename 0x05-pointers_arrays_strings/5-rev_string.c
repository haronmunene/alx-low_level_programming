#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a string parameter input
 */
void rev_string(char *s)
{
	int j, i;
	char temp;

	for (j = 0; s[j] != '\0'; ++j)
		;

	for (i = 0; i < j / 2; ++i)
	{
		temp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = temp;
	}
}
