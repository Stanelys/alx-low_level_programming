#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Prints the numbers 1 - 100 W/
 * For multiples of 3 Fizz, For multiples of 5 Buzz
 * FizzBuzz for Multiples of both
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

