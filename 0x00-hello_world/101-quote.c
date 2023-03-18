#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 1
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*str)
		write(STDERR_FILENO, str++, 1);

	return (1);
}
