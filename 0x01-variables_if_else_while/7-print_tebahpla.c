#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	int le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
