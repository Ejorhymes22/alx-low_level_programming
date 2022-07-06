#include "3-calc.h"
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

/**
 * main - completes an operation
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0;
 */

int main(int ac, char **av)
{
    int z;
    int (*f)(int a, int b);

    if (ac != 4)
    {
        printf("Error\n");
        exit(98);
    }
    if ((strcmp(av[2],"/") == 0 || (strcmp(av[2],"%") == 0)) && strcmp(av[3],"0") == 0)
    {
        printf("Error\n");
        exit(100);
    }
    f = (*get_op_func(av[2]));
    if (f == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    z = (*f)(atoi(av[1]), atoi(av[3]));



    printf("%d\n", z);
    return 0;
}
