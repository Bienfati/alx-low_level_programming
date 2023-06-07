#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s:  string .
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int longst = 0;

if (*s)
{
longst++;
longst += _strlen_recursion(s + 1);
}
return (longst);
}
