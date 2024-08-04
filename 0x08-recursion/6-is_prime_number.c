#include "main.h"

/**
 * is_prime_number - gets if a number is prime recursively
 * _prime_helper - helper function
 * @n: number
 * @y: number
 *
 * Return: 0
 */


int _prime_helper(int n, int y, int sum)
{
        if (n / 2 < y && sum < 1)
            return (1);
        else if (n % y == 0)
           sum += 1;
        if (sum > 1)
            return (0);
        return _prime_helper(n, y + 1, sum);
}


int is_prime_number(int n)
{
        int y = 2;
        int sum = 0;
        if (n <= 1)
            return (0);
        if (n == 0)
        {
            return (-1);
        }

        return (_prime_helper(n, y, sum));
}