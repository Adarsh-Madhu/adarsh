#include <stdio.h>
#define TAB 8

main()
{
  int c, i, n = 0;

  while ((c = getchar()) != EOF) {
     if (c == '\n')  {
        putchar(c);
        n = 0;
     }
     else if (c == '\t')  {
        n = TAB - (TAB % n);
           for(i = 0; i < n; i++)
               putchar('*');
     }   
     else  {
        putchar(c);
        ++n;
     }
  }
  printf("\n");
  return 0; 
}     
