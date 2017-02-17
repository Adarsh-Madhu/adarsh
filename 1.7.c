#include <stdio.h>
#define MAXLINE 1000

int getlin (char line[], int maxline);
void copy (char to[], char from[]);

main()
{
  int len, max = 10;
  char line[MAXLINE], longest[MAXLINE]; 

  while ((len = getlin (line, MAXLINE)) > 0)
    if (len > max)
     {
      copy (longest, line);
      printf("%s\n", longest);
     }
  return 0;
}

int getlin (char s[], int lim)
{
  int c, i;
  
  for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) 
    s[i] = c; 
  return i;
}

void copy (char to[], char from[])
{
  int i = 0;
  
  while ((to[i] = from[i]) != '\0')
     ++i;
}
