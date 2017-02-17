#include <stdio.h>

main()
{
  int c, nw = 0;

  while ((c = getchar()) != EOF )
   {
     if (c == ' ' ||  c == '\t' || c =='\n')
        ++nw;
   }
  printf("\n");
  nw++;
  printf("no of words = %d\n", nw);
  
}
