#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: reversed alphabets
 */
int main(void)
{
	char alphabets[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
