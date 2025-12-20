#include <stdio.h>

/**
 * main - execution emtry point
 *
 * Return: void
 */

int main(void)
{
	int k = 65;

	while (k <= 122)
	{
		while (k <= 90)
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
