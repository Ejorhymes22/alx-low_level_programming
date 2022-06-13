#include <stdio.h>

int main(void)
{
	int n = 998;

	while (n >= 9)
	{
		putchar((n % 10) + '0');
		n = ((n - (n % 10)) / 10);
	}
	putchar(n + '0');
	return 0;
}
