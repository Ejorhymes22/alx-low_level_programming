#include "main.h"

/**
 * infinite_add - adds numbers
 * @n1: first num
 * @n2: second num
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0;
    int len2 = 0;
    int buff;
    int x = 0;
    int y = 0;
    int i = 0;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;
    r[i] = 0;



    while (len1 + 1 > 0 || len2 + 1 > 0)
    {
        len1--, len2--;
        buff = r[i];

        if (len1 >= 0)
            buff += (n1[len1] - '0');
        else if (len1 < 0)
            buff += 0;
        if (len2 >= 0)
            buff += (n2[len2] - '0');
        else if (len2 < 0)
            buff += 0;


        if (buff > 9)
        {
            x = buff % 10;
            y = buff / 10;
            buff = 0;
        }
        r[i] = (buff + x) + '0';
        i++;
        r[i] = y;
        x = 0;
        y = 0;
    }
    r[i] = '\0';

    if (i >= size_r)
            return (0);

    rev_string(r);


    return r;

}




void rev_string(char *s)
{
        int i = 0;
        int j = 0;
        int k;
        char c;

        while (s[i] != '\0')
                i++;

        k = (i + 1) / 2;
        i--;

        while ((k) > 0)
        {
                c = s[j];
                s[j++] = s[i];
                s[i--] = c;
                k--;
        }
}
