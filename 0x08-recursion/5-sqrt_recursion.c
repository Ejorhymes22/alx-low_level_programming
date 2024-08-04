#include "main.h"

/**
 * _sqrt_recursion - gets the square recursively
 * _sqrt_helper - helper function
 * @n: number 
 *
 * Return: 0
 */

int _sqrt_helper(int n, int y)
{
        if (n <= y)
            return (-1);
        else if (n == y * y)
           return (y);
        return _sqrt_helper(n, y + 1);
}

int _sqrt_recursion(int n)
{
        int y = 2;
        if (n == 1)
            return (1);
        if (n == 0)
        {
            return (-1);
        }

        return (_sqrt_helper(n, y));        
}