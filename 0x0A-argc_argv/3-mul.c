#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int ans;
	int a;
	int b;

  if (argc == 3)
    {
	a = atoi(argv[1]); 
	b = atoi(argv[2]);
	ans = a * b ;
printf("%d\n", ans);

}
else 
{
	printf("Error\n");
return (1);
}
  return (0);
}
