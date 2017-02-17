#include<stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);
void copy(char to[], from[]);

main()
{
  int len, max = 0;
  char line[MAXLINE], longest[MAXLINE];

  while (len = getlin(line, MAXLINE) > 0)
   {
     if (len > max)
      {
        max = len;
        copy(longest, line);
      }
     if (max > 0)
       printf("\nlongest line is %s\n", longest);

   }
}

int getlin(char s[], int lim)

{
  int c, i;
  
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
     s[i] = c;
  if (c == '\n')
     ++i;
  s[i] = '\0';
  return i;
}

void copy (char to [], char from[])
{
  int i;
  i = 0;
   
  while ((to [i] = from[i]) != '\0')
    ++i;
}
