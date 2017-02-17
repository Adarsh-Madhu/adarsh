#include <stdio.h>

main()
{
  int c, nw = 0;

  while ((c = getchar()) != EOF )
   {
     if (c == ' ' || c == '\n' || c == '\t')
        putchar('\n');
     else
        putchar(c);
   }
  printf("\n");

}
