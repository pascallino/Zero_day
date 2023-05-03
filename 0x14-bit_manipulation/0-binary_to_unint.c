#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

/**
 * _pow - Returns the value of x raised to the power of y value
 * @x: The number to be raised.
 * @y: The power.
 * Return: The value of x raised to the power of y.
 */
int _pow(int x, int y)
{
int  result = x;
int count = y;
if (count >= 1)
{
	result *= _pow(x, y - 1);
	return (result);
}
if (y == 0)
{
	return (1);
}
if (y < 0)
{
	return (-1);
}
return (result);
}

/**
 * binary_to_uint - binary to decimal
 * @b: binary
 * Description: binary conversion;
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num;
int n = 0, i = 0;
int val;
if ( b == NULL)
{
	return (0);
}

while (b[i] != '\0')
{
if  (b[i] < '0' && b[i] > '1')
{
return (0);
}
i++;
}
i--;
val = atoi(b);
while (val > 0)
{
num = num + ((val % 10)  * _pow(2,n));
val = val / 10;
n++;
}
return (num);
}
