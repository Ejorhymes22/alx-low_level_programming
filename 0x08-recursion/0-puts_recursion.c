#include "main.h"

/**
 * _puts_recursion - this prints recursively a string
 *
 * Return: 0
 */
void _puts_recursion(char *s){
        if (*s == '\0')
        {
                __putchar("\n");
                return;
        }
        _putchar(*s);
        _puts_recursion(s + 1);
}