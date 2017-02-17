#include <stdio.h>

int power(int m, int n);

main()
{
  int i, a, b;
  scanf("%d %d", &a, &b);
  
  for (i = 0; i < 5; i++)
    printf("%d %d %d\n", i, power(a,i), power(b,i));

  return 0;
}


int power(int b, int n)
{
  int i, a = 1;
  
  for(i = 0; i <= n; i++)
     a = a * b;
  return a;  
 
}
