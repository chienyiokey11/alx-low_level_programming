#include <stdio.h>
/**
 * main - printing in lowercase with putchar\
 *
 * Return: 0 always
 */
int main(void)
{
	int num = 48, alpha = 'a';

	while (num < 58)
	{
		putchar(num);
		num++;
	}
		while (alpha <= 'f')
		{
			putchar(alpha);
			alpha++;
		}
	putchar('\n');
	return (0);
}
