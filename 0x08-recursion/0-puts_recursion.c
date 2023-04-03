#include "main.h"

void  _puts_recursion(char *me)
{

	if (*me)
	{
_putchar(*me);

_puts_recursion(me + 1);
	}	
}
