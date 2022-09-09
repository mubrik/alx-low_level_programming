#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	/* char hexadec[] = "0123456789abcdef"; */
	int num_arr[15] = {1,2,3,4,5,6,7,8,9,49,50,51,52,53,54};
	int i;
	/* int len_str = strlen(hexadec); */

	for (i = 0 ; i < 15; i++)
	{
		putchar(num_arr[i] +'0');
	}
	/* print new line */
	putchar('\n');
	return (0);
}
