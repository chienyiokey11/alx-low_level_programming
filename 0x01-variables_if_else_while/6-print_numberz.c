#include <stdio.h>
/**
 * main - printing with putchar function
 *
 * Return: 0 always
 */
int main(void)
{
	int numz = 48;

	while (numz < 58)
	{
		putchar(numz);
		numz++;
	}
		putchar('\n');
	return (0);
}
