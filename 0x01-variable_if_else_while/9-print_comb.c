#include <stdio.h>

/**
 * main - execution emtry point
 *
 * Return: void
 */

int main(void)
{
	int k = 48;

	while (k <= 57)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
}
