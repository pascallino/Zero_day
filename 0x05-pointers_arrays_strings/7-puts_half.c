#include "main.h"
#include <stdio.h>
/**
 * puts_half - print  string 
 * @str: pointer parameter a
 * Description: print strings  value
 */

void puts_half(char *str)
{
int i;
int h;
int lastdigit = 0;

while (str[i] != '\0')
{
i++;
}
printf("%d", i);

if (i % 2 == 0)
{
	lastdigit = i / 2;
}
else
{
lastdigit = ((i - 1) / 2) + 1 ;
}

printf("%d", lastdigit);

for (h = lastdigit;h <= i - 1; h++)
{

printf("%c", str[h]);     
lastdigit-=1;
if (lastdigit == 0)
{
	break;
}
}
printf("\n");
}
int main(void)
{
puts_half("0123456789");	
return (0);
}
