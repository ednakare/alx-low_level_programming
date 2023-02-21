#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: success
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		putchar('\n');
		n++;
		}
	}
	putchar('\n');
	return (0);
}
