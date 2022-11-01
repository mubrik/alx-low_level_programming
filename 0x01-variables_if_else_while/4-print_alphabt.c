#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out alphabets filtered q and e
 */
int main(void)
{
	/* string = array of chars */
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		/* checking q and e */
		if (alphabets[i] != 'q' && alphabets[i] != 'e')
		{
			putchar(alphabets[i]);
		}
	}
	/* print new line */
	putchar('\n');
	return (0);
}
