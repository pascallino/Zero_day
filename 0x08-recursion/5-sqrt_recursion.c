#include "main.h"
#include <stdio.h>


int  nroot(int n, int count);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */


int _sqrt_recursion(int n)
{

return (nroot(n, 1));
}

/**                                   * root - Returns the natural square root of a number.
 * @n: The number to return the squar
e root of.
 *  @count: increment
 *  Return: If n has a natural squar
 root - the natural square root of n
 If n does not have a natural square root - -1.
 */

int nroot(int n, int count) 
{
int store = n;
int ans;
int root = n;

if (root <=  0)
{
return (-1);
}
ans = count * count;
if (ans == root)
{
store = count;
        return (count);
}
else if (ans  > root)
{                        
	return (-1);       
}
else
{
return(nroot(store, count + 1));
}
return (count);
}
