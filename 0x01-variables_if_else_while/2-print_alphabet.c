#include <stdio.h>
/**
 * main - To print alphabet with putchar function
 *
 * Return: always 0 success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
return (0);
}
