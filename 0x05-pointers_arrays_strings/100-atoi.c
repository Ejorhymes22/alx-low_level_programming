#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to the string
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int n;
	int i = 0;
	int flag = 0;
	int digit = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			flag++;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}
		
	n = i;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] + '0';
			if (flag % 2)
				digit = -digit;
			num = num * 10 + digit;
		}
		if (!(s[i + 1] >= '0') && !(s[i + 1] <= '9'))
			break;
		i++;
	}
	return (num);
}
