#include "main.h"
#include <unistd.h>
/**
 * main - a function that checks for a digit 0 through 9
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
}

