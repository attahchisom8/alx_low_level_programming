#include <stdio.h>

/**
 * main - execution emtry point
 *
 * Return: void
 */

int main(void)
{
	int k = 48;

	while (k <= 101)
	{
		while (k <= 57)
		{
			putchar(k);
			k++;
		}
		while (k <= 96)
			k++;
		putchar(k);
		k++;
	}
	putchar('\n');
}
