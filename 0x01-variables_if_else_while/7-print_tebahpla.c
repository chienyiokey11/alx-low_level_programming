#include <stdio.h>
/**
 * main - printing lowercase with putchar
 *
 * Return: 0 always
 */
int main(void)
{
	int lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
return (0);
}
