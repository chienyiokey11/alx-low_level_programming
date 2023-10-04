#include <stdio.h>
/**
 * main - using putchar to print alphabet with exceptions
 *
 * Return: 0 always
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}
		putchar('\n');
	return (0);
}

