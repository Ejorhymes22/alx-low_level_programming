#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *endptr;
    int i = 1, sum = 0, num;

    if (argc == 1)
    {
        printf("%d\n", 0);
        return 0;
        
    }

    while (i < argc)
    {
        num = strtol(argv[i], &endptr, 10);
        if (endptr == argv[i])
        {
            printf("Error\n");
            return(1);
        }
        else
            sum += num;
        i++;

    }


    printf("%d\n", sum);

    return 0;
}
