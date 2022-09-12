#include <stdio.h>
/**
 * main - print possible combination of two 2-digit
 * numbers
 * Return: returns zero at the end
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}


