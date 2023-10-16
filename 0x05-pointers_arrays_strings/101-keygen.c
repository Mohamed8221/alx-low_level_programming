#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int i, total, num;

	total = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		total += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			num = 2772 - total - '0';
			total += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
