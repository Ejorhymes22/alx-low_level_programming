#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *  starting with the first character
 *  @str: the string
 *
 *  Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
	}

	_putchar('\n');
}
