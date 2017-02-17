#include <stdio.h>

main()
{

int f, c;
int l = 99, u = 198;

c = l;
printf("\t C\t =\t F\n");
while ( c <= u )
  {
    f = (5 * c) / 9 + 32;
    printf ("\t%d\t =\t %d\n ", c, f);
    c = c + 9;
  }
}
