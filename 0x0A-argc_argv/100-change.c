#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[5]= {25, 10, 5, 2, 1};
    int i = 0;
    int total, div;
    int cents = atoi(argv[1]);

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    if (cents < 0)
    {
        printf("0\n");
    }

    while (i < 5)
    {
        if (arr[i] <= cents)
        {
            div = cents / arr[i];
            total += div;
            cents = cents % arr[i];
            if (cents == 0)
                break;
        }
        i++;
    }
    printf("%d\n", total);
    return (0);
}