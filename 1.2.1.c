#include <stdio.h>

main()
{

int f, c;
int l = 104, u = 194;

f = l;
while ( f <= u )
  {
    c = 5 * (f - 32) / 9;
    printf ("%dF = %dC\n ", f, c);
    f = f + 9;
  }
}
