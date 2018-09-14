#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			putchar (a);
			putchar (b);
			if (a == '9' && b == '9')
			{
				break;
			}
			putchar (',');
			putchar (' ');
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
