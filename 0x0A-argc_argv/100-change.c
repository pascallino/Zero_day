#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (int argc, char *argv[])
{
  int count;
  int isnotnum;
  int change;
  int cents[] = {25, 10, 5, 2, 1};
  int moneyList[100];
  int i, k = 0;

  isnotnum = 0;
//  moneyList = {0};


  if ((argc < 2  ||  (argc >  2)))
    {
	    printf("Error\n");
	    return (1);
    }
for (count = 1; count < argc; count++)
{
if ((isdigit(*(argv[count])) == 0))
{
isnotnum = 1;
}

}
if (isnotnum == 1 || atoi(argv[1]) < 1)
{
	printf("0\n");
	return (0);
}

else
{
 change = atoi(argv[1]);
    for (i = 0; i <= 4; i++) 
    {
        while (change >= cents[i]) 
	{

            change -= cents[i];

            // Add coin in the list

        moneyList[k++] = cents[i];

        }

    }
 

    for (i = 0; i < k; i++) 
    {
	    printf("%d\n", moneyList[i]);
    }
}
  return (0);
}
