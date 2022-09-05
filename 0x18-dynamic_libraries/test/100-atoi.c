#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to the string
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 0;
	int flag = 0;
	int digit = 0;
	int num = 0;
	int f = 0;
	int len = 0;

	while(s[len] != '\0')
		len++;

	while (s[i] < len && f == 0)
	{
		if (s[i] == '-')
			flag++;


		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] + '0';
			_putchar(digit);
			if (flag % 2)
				digit = -digit;
			num = num * 10 + digit;
			f = 1;

		
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
				break;
			f = 0;

		}
		i++;
	}


	while (s[i] != '\0' && f== 0)
	{
	}
	return (num);
}
