#include <stdio.h>

int temp(int f, int c);

main()
{
 
  int i, f, c, l = 104, a = 9;
  f = l;

  for (i = 0; i <= 9; i++)
    {
      printf("%d %d %d\n", i, f, temp(f,i));
      f = f + a; 
    }
  return 0;
}

int temp(int f, int c)
{
   int a;
   a = 5 * (f - 32) / 9;
   return a;
}
