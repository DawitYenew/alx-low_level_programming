#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (squareRoot(n, 1));
}

/**
 * square - find square root of a number
 * @n: integer to find square root
 * @val: square root
 * Return: integer
 */

int squareRoot(int n, int i)
{

if (i * i == n)
	return (i);
else if (i * i < n)
	return  (squareRoot(n, i + 1));
else
	return (-1);

}
