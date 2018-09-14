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
		az++;
	}
	putchar('\n');

	return (0);
}
