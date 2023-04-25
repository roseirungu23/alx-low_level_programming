#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *  Description: This function prints each lowercase letter of
 * the alphabet, from 'a' to 'z', followed by a newline character.
 * Return: Void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
