#include "main.h"
#include <stdio.h>

/**
	* main - program that prints all arguments it receives.
	* @argc: argument count
	* @argv: arguments point to array pointer
	* Return: 0 success
	*/
int main(int argc, char *argv[])
{
	int index;

	for(index = 0; index <= argc - 1; index++)
		printf("%s\n", argv[index]);

	return (0);
}
