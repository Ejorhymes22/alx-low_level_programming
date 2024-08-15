#include <stdio.h>


int main (int argc, char *argv[])
{
    int i = 0;
    while (i < argc)
    {
        printf("%s\n", argv[0]);
        i++;
    }
    return(0);
}