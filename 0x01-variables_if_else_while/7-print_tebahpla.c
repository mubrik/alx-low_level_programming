#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	char alphabets[] = "zyxwvutsrqponmlkjihgfedcba";
	int len = strlen(alphabets);
	int i;

	for (i = 0 ; i < len; i++)
	{
		putchar(alphabets[i]);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
