#include "main.h"

/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 * Description: this method is good for speed, check this youtube video
 *   https://youtu.be/wAyrtLAeWvI?list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
