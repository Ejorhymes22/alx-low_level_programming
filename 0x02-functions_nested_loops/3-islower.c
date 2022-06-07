#include "main.h"

/**
 * _islower - checks whether character is lowercase
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
