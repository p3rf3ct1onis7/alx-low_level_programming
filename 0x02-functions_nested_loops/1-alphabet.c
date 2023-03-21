#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Prints the lowercase alphabets
 *
 * print_alphabet() prints the lowercase of alphabets
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
}
