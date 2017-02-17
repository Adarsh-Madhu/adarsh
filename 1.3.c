#include <stdio.h>

main()
{

int f, c;
int l = 104, u = 194;

f = l;
printf("\t F  = C\n");
while ( f <= u )
  {
    c = 5 * (f - 32) / 9;
    printf ("\t%d = %d\n ", f, c);
    f = f + 9;
  }
}
