#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
		putchar (a);
		putchar (b);
		putchar (',');
		putchar (' ');
	b += 1;
	}
	a += 1;
}
putchar('\n');
	return (0);
}
