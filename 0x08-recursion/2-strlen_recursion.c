#include "main.h"

/**
 * _strlen_recursion - this prints recursively a length of a string in reverse
 * @s: takes in a string(pointer to a string)
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
        {
                return 0;
        }

        return 1 + _strlen_recursion(s + 1);
        
}