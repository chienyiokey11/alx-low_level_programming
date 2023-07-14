#include <stdio.h>
#include <unistd.h>
/**
 * main - printing with another print function that is not printf or puts
 *
 * Return: always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
