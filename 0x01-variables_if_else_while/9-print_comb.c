#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int az;

	az = 0;
	while (az <= 9)
	{
		putchar(az + '0');
		if (az != 9)
		{
			putchar(',');
			putchar(' ');
		}
		az++;
	}
	putchar('\n');

	return (0);
}
