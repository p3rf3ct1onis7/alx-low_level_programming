#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry - point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
}
