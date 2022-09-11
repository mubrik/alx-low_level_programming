#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out alphabets
 */
int main(void)
{
	/* string = make an 'array' of characters */
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
