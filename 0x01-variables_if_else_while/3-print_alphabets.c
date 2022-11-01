#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out alphabets and capital
 */
int main(void)
{
	/* string = array of characters */
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
