#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Assigns random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char in, alpha;

	for (in = '0'; in <= '9'; in++)
		putchar(in);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);

}
