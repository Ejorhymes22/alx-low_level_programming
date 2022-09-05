
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: added num
 */


int add(int a, int b)
{
    return (a + b);
}


/**
 * op_sub - substracts two num
 * @a: num 1
 * @b: num 2
 *
 * Return: total
 */

int sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiply two num
 * @a: num1
 * @a: num2
 *
 * Return: reuslt
 */


int mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides two num
 * @a: num1
 * @b: num2
 *
 * Return: result
 */

int div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - gets the modulos of 2 num
 * @a: num1
 * @b: nulm2
 *
 * Return: result
 */

int mod(int a, int b)
{
    return (a % b);
}
