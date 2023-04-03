#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints all string in reverse.
 * @s: The string to be printed. im the function
 */
int count;
char *s2;
void _print_rev_recursion(char *s)
{
if (!(count > 0))
{
count = strlen(s) - 1;
s = s + (count - 1);
}
if (count >= 0) 
	{
count--;
_putchar(*s);
_print_rev_recursion(s - 1);
	}
}
