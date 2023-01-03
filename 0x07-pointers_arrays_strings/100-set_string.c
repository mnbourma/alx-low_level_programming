#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: this is the source string.
 * @to: this is the destination string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
