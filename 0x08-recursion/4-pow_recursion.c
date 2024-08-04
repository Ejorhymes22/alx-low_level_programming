
/**
 * _pow_recursion - factorizes recurcively
 * @x: number powered
 * @y: number raised
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
        if (y < 0)
            return (-1);
        if (y == 0)
        {
            return (1);
        }

        return (x * _pow_recursion(x, y - 1));        
}