#include "main.h"
/**
 * main - tests that the integer is positive or negative
 * postitive_or_negative - check
 *
 * @i: the number to be  checked
 *
 * Return: always 0
 */
void positive_or_negative(int i)

{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
