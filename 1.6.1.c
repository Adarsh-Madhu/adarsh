#include <stdio.h>

main()
{
  int i, c, nw = 0, no = 0;
  int dig[10];

  for (i = 0; i < 10; ++i)
      dig[i] = 0;

  while ((c = getchar()) != EOF )
   {
     if (c >= '0' && c <= '9')
       ++dig[c-'0'];
     else if (c == ' ' || c == '\t' || c == '\n')
       ++nw;
     else 
       ++no;
   }
  printf("digits = ");
  for (i = 0; i < 10; ++i)
    printf("%d ", dig[i]); 
 
  printf("number of white space = %d\n", nw);
  printf("number of others = %d\n", no);

}
