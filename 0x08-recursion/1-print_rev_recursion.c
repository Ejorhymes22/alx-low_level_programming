#include "main.h"

/**
 * _print_rev_recursion - this prints recursively a string in reverse
 * @s: takes in a string(pointer to a string)
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
                return;
        }
        else
                _print_rev_recursion(s + 1);
        _putchar(*s);
}