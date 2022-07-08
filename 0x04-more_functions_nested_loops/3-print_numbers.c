#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * Return: Always 0 (Success).
 */
void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
