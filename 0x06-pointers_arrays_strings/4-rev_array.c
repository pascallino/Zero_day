#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
        int h = 0;
	int a2[n];
	int i = 0;
int k = n;

n = n - 1;
while (n >= 0)
{
a2[i] = a[n];
n--;
i++;
}

for (i = 0; i < k ; i++)
{
printf("%d", a2[i]);
}
printf("\n");
}
