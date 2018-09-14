#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;
	char AZ;

	az = 'a';
	while (az <= 'z')
	{
		putchar(az);
		az = az + 1;
	}

	AZ = 'A';

	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ = AZ + 1;
	}
	putchar('\n');
	return (0);
}
