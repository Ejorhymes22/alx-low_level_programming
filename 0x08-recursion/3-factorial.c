#include "main.h"

/**
 * factorial - factorizes recurcively
 * @n: number to be factorized
 *
 * Return: 0
 */
int factorial(int n)
{
        if (n < 0)
            return (-1);
        if (n == 0)
        {
                return (1);
        }

        return (n * factorial(n - 1));        
}