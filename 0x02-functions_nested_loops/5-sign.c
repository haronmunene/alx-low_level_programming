#include "main.h"

/**
 * print_sign - checks the sign of number n
 * @n: the number being checked
 * Return: 1 and -1 otherwise returns 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
