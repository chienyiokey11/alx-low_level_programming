#include <stdio.h>
/**
 * main - out-putting alphabets with the function putchar
 *
 * Return: (0) always success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha >= 'z'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
return (0);
}
