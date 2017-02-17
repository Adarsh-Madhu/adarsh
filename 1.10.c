#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF)
   {
     if (c == ' ')
      {
       putchar('\\');
       putchar('b');
      }
     if (c == '\t')
      {
       putchar('\\');
       putchar('t');
      }
     if (c == '\\')
      {
       putchar('\\');
       putchar('\\');
      }  
     if (c != ' ' && c != '\t' && c!= '\\')
      putchar(c);
   }
  printf("\n");   
}
