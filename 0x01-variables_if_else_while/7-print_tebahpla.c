#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)

{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)

	{
		putcchar(alphabet);
	}
	putchar('\n');

	return (0);
}
