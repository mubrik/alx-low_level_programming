#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @str_ptr: pointer/buffer
 * @to: value to set to
 */
void set_string(char **str_ptr, char *to)
{
	/* bruhhh, c!! had to look into storage mem! */
	*str_ptr = to;
}
