#include <stdio.h>
#define MAXLINE 1000

void reverse (char line[], int maxline);

main()
{
  char line[MAXLINE];
 
  reverse (line, MAXLINE);
  printf("\n %s\n", line);
  
  return 0;
}

void reverse (char line[], int lim)
{
  char a, c, s[1000];
  int n, i = 0, j = 0;

  while ((c = getchar()) != EOF)
   {
     line[i] = c;
     ++i;
   }
  n = i;
 
  while (j <= i)
   {
     a = line[j];    
     line[j] = line[i];
     line[i] = a;
     ++j; 
     --i;
   }   
}

