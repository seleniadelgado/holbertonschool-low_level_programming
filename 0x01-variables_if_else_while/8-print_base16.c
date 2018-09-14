#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char az;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num = num + 1;
	}

	az = 'a';

	while (az <= 'f')
	{
		putchar(az);
		az = az + 1;
	}
	putchar('\n');
	return (0);
}
