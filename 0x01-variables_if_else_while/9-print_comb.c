#include <stdio.h>
/**
 * main -  a program that prints all possible combinations
 *
 * Return: 0 always
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
		if (num == 58)
		{
		break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
