#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	int j;
	va_list args;
	unsigned int i;

	j = 0;
    va_start(args, n);
    for (i = 0; i < n; i++) 
    {

		    printf("%s%d", i == 0 ? "" : separator != NULL ? separator : "" , va_arg(args, int));
		   /* printf("%c", separator[j]);*/
	
    }
    va_end(args);
    printf("\n");
}
