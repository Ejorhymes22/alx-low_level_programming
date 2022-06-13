#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i--;

	if (i % 2)
		i = (i - 1) / 2;
	else
		i = i / 2;
	
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
		
