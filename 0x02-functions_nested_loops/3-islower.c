/**
 * _islower - prints out alphabet in low case 10 times
 * @c: the character to check
 * Return: 1 if c is lower case, returns 0 otherwise
 */
int _islower(int c)
{
	/* simple if check */
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
