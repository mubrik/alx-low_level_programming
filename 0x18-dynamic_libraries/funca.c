#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
 * _abs - computes the absolute value on an int
 * @n: the int
 * Return: int the computed vaue
 */
int _abs(int n)
{
	/* simple if check */
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}

/**
  * _isupper - checks if int is uppercase character
	* @c: integer to chect
	* Return: 1 if upper, 0 if lower
	*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
  * _isdigit - checks if int in range 0-9
	* @c: integer to check
	* Return: 1 if digit, 0 if not
	*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/**
  * _strlen - recursive? returns the length of a string.
	* @s: pointer of char
	* Return: int length
	*/
int _strlen(char *s)
{
	/* checking if the current value of pointer not null */
	if (*s != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		s++;
		return (1 + _strlen(s));
	}

	return (0);
}

/**
  * _puts - returns the length of a string. recursive
	* @str: pointer of char
	* Returns:  void
	*/
void _puts(char *str)
{
	/* checking if the value of pointer not null */
	if (*str != 0)
	{
		/* put/print value */
		_putchar(*str);
		str++;
		/* move the pointer foward and call the function again! */
		_puts(str);
	}
	else
	{
		/* the value is null, end of string, put new line */
		_putchar('\n');
	}
}

/**
  * _strcpy - copies the string pointed to by src,
	* including the terminating null byte (\0), to the buffer pointed to by dest
	* @dest: pointer dest of char
	* @src: pointer src of character
	* Return: void
	*/
char *_strcpy(char *dest, char *src)
{
	char *first;

	/* copy first pointer */
	first = dest;

	/* iterate, end after hitting null byte */
	while (*src != '\0')
	{
		/* assign value of source to dest */
		*dest = *src;
		/* push both pointers forward */
		src++;
		dest++;
	}

	/* add null pointer to last */
	*dest = '\0';

	return (first);
}

int _atoi(__attribute__((unused)) char *s)
{

}

/**
  * *_strcat - function that concatenates two strings
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* Return: *char
	*/
char *_strcat(char *dest_ptr, char *src_ptr)
{
	/* save pointer of start of dest*/
	char *start_ptr;

	start_ptr = dest_ptr;

	/* get to the nul byte of dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* now add dst value from nul byte */
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		/* push both forward*/
		dest_ptr++;
		src_ptr++;
	}

	/* add null byte */
	*dest_ptr = '\0';

	return (start_ptr);
}

/**
  * *_strncat - function that concatenates two strings
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* @n: number to add
	* Return: *char
	*/
char *_strncat(char *dest_ptr, char *src_ptr, int n)
{
	int no_of_iter;
	/* save pointer of start of dest */
	char *start_ptr;

	start_ptr = dest_ptr;

	/* get to the nul pointer of dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	no_of_iter = 0;

	/* now add dst value from nul ptr */
	while (*src_ptr != '\0' && no_of_iter < n)
	{
		*dest_ptr = *src_ptr;
		/* push both forward*/
		dest_ptr++;
		src_ptr++;
		no_of_iter++;
	}

	/* add null byte */

	return (start_ptr);
}

/**
  * *_strncpy - function that copies a string.
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* @n: number to add
	* Return: *char
	*/
char *_strncpy(char *dest_ptr, char *src_ptr, int n)
{
	int no_of_iter;

	no_of_iter = 0;

	/* now add dst value from nul ptr */
	while (no_of_iter < n)
	{
		/* use iteration length to add to pointer */
		*(dest_ptr + no_of_iter) = *src_ptr;
		/* push iteraction forward */
		no_of_iter++;
		/* check if we hit null pointer, dont push forward if so */
		if (*src_ptr != '\0')
			src_ptr++;
	}

	return (dest_ptr);
}

/**
  * _strcmp - function that compares two strings.
	* @s1_ptr: src 1 pointer char
	* @s2_ptr: src 2 pointer char
	* Return: 0 if equal -1 if s1 less than s2
	* +1 if greater
	*/
int _strcmp(char *s1_ptr, char *s2_ptr)
{
	int s1_len, s2_len, iter, max_iter, compare_res;

	/* get len of both */
	s1_len = _strlen(s1_ptr);
	s2_len = _strlen(s2_ptr);
	compare_res = 0;

	/* iterate using longer len*/
	max_iter = s1_len >= s2_len ? s1_len : s2_len;
	iter = 0;

	while (iter < max_iter)
	{
		/* compare val of pointers*/
		compare_res = *(s1_ptr + iter) - *(s2_ptr + iter);
		/* if not equal break */
		if (compare_res != 0)
			break;
		iter++;
	}

	return (compare_res);

}

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by str_ptr with the constant byte b
 * @str_ptr: Memory ptr to fill
 * @byte: byte to fill with
 * @n: number to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *str_ptr, char byte, unsigned int n)
{
	/* varaibles */
	char *memspace;

	/* copy memspace ptr/address */
	memspace = str_ptr;
	/* iterate while decrementing n */
	while (n--)
	{
		/* fill byte and push forward */
		*memspace = byte;
		memspace++;
	}

	return (str_ptr);

}

/**
 * _memcpy - copies n bytes from memory area
 * pointed to by src_ptr to memory area dest_ptr
 * @src_ptr: Src ptr
 * @dest_ptr: dest ptr
 * @n: number to fill
 * Return: char * pointer to dest area
 */
char *_memcpy(char *dest_ptr, char *src_ptr, unsigned int n)
{
	/* variables */
	char *memspace;

	/* copy memspace ptr/address */
	memspace = dest_ptr;
	/* iterate while decrementing n */
	while (n--)
	{
		/* fill byte and push forward */
		*memspace = *src_ptr;
		memspace++;
		src_ptr++;
	}

	return (dest_ptr);
}

/**
 * _strchr - locates a character in a string.
 * @str_ptr: Src ptr
 * @c: character to locate
 * Return: pointer if located, NULL else
 */
char *_strchr(char *str_ptr, char c)
{
	/* pointer to return */
	char *result_ptr = NULL;

	/* cover base case, null byte */
	if (c == '\0')
	{
		while (*str_ptr != '\0')
		{
			/* push pointer till we get to null then return it */
			str_ptr++;
		}
		return (str_ptr);
	}

	/* simple iteration */
	while (*str_ptr != '\0')
	{
		if (*str_ptr == c)
		{
			result_ptr = str_ptr;
			break;
		}
		str_ptr++;
	}

	return (result_ptr);
}

/**
 * _strspn - gets the length of a prefix substring.
 * @str_ptr: the string
 * @accept: characters
 * Return: int, len.
 */
unsigned int _strspn(char *str_ptr, char *accept)
{
	/* copy pointer */
	char *src_ptr, *accept_ptr;

	src_ptr = str_ptr;
	accept_ptr = accept;

	/* recursive */
	/* check if string in accept */
	if (_strchr(accept_ptr, *src_ptr))
	{
		/* string is in, push forward and call again adding 1 */
		src_ptr++;
		return (1 + _strspn(src_ptr, accept_ptr));
	}
	/* recursive base condition */
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @str_ptr: the string
 * @accept: characters
 * Return: char * if exist, else NULL
 */
char *_strpbrk(char *str_ptr, char *accept)
{
	/* copy pointer */
	char *src_ptr, *accept_ptr;

	src_ptr = str_ptr;
	accept_ptr = accept;

	while (*src_ptr != '\0')
	{
		/* check if string in accept */
		if (_strchr(accept_ptr, *src_ptr))
		{
			/* string is in,return pointer/address */
			return (src_ptr);
		}
		src_ptr++;
	}

	return (NULL);
}

/**
 * match_str - searches a string for specific match
 * @str_ptr: the string
 * @match_ptr: characters
 * Return: 1 if exact match, else 0
 */
int match_str(char *str_ptr, char *match_ptr)
{
	int match_len, index, result;

	result = 1;
	/* get str len of match */
	match_len = _strlen(match_ptr) - 1;
	/* match all characters */
	for (index = 0; index <= match_len; index++)
	{
		if (str_ptr[index] != match_ptr[index])
		{
			result = 0;
			break;
		}
	}
	return (result);
}


/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: exact characters to find in string
 * Return: char * if exist, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = NULL;
	/* cover base case, null byte */
	if (*needle == '\0')
	{
		result = haystack;
		return (result);
	}

	while (*haystack != '\0')
	{
		/* check for the first match*/
		if (*haystack == *needle)
		{
			/* check if the rest matches */
			if (match_str(haystack, needle))
			{
				/* if all matchs return the ptr/address */
				result = haystack;
				break;
			}
		}
		/* move haystack */
		haystack++;
	}

	return (result);

}