#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
