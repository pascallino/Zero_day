#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	int num;
	int j;
	va_list args;
	unsigned int i;
	char *str;

	j = 0;
    va_start(args, n);
    for (i = 0; i < n; i++) 
    {
	    str = va_arg(args, char *);
if (str == NULL)	
{
str = "nil";
}

	    printf("%s%s", 
			    i == 0 ? "" : separator != NULL ? separator : "" , str);
/* printf("%c", separator[j]);*/
	
    }
    va_end(args);
    printf("\n");
}
