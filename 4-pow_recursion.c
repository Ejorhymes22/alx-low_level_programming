#include "main.h"

/**
 * _pow_recursion - gets thevalue of x raise 
 * to the power of y
 * @x: the number
 * @y: the poeer
 *
 * Return: value raise to poeer y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
