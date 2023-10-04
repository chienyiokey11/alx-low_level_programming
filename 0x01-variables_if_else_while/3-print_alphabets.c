#include <stdio.h>
/**
 * main - using putchar to print alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	int alph, alph2 = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	while (alph2 <= 'Z')
	{
		putchar(alph2);
		alph2++;
	}
		putchar('\n');
	return (0);
}
