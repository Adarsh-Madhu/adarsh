#include <stdio.h>

main()
{
  int c, b = 0, t = 0, nl = 0;
  
  while ((c = getchar()) != EOF)
    {
      if (c == '\n')
         ++nl;
      if (c == '\t')
         ++t;
      if (c == ' ')
         ++b;
    } 
  printf("\n");
  printf("no of blank = %d\n", b);
  printf("no of tab = %d\n", t);
  printf("no of new line = %d\n", nl);

}
