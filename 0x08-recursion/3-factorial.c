#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: the number we want to calculute his factoriel
 *
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
else
return (n * factorial(n - 1));
}
