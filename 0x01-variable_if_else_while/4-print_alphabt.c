#include <stdio.h>

/**
 * main - execution emtry point
 *
 * Return: void
 */

int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		if (k == 101 || k == 113)
			k++;
		putchar(k);
		k++;
	}
	putchar('\n');
}
