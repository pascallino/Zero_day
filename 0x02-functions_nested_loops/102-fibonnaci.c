#include <stdio.h>                        /**                                        * times_table - Entry point               * Description: print fibonnaci
 * Return: 0
*/


int main(void)
{

        int x, y;
       int  i; 
       long num1, num2;
       long  sum;
       i = 1;
       num1 = 1;
       num2 = 2;
       sum = 0;
       printf("%d, ", 1);
       printf("%d", 2);
       while (i <= 48)
        {
sum = num1 + num2;
num1 = num2;
num2 = sum;

putchar(',');
putchar(' ');
printf("%ld", sum);
i++;
        }
        putchar('\n');
        return (0);
}
