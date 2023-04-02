#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
		for (i = 0; i <= 51; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
