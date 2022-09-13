/**
 * _isalpha - checks if char is alphabetic
 * @c: the character to check
 * Return: 1 if c is alphabetic lower case or upper
 * returns 0 otherwise
 */
int _isalpha(int c)
{
	/* simple if check */
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
