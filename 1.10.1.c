#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlin (void);
void copy (void);

main()
{
  int len;
  extern int max;
  extern char longest[];
  max = 0;

  while ((len = getlin()) > 0)
   if (len > max)
    {
      max = len;
      copy();
    }
  if (max > 0)
    printf("\n%s", longest);
  return 0;
}

int getlin (void)
{
  int c, i;
  extern char line[];

  for (i = 0; i < 1000-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c = '\n')
    ++i;
  line[i] = '\0';
  return i;
}

void copy (void)
{
  int i = 0;
  extern char line[], longest[];
  
  while ((longest[i] = line[i]) != '\0')
    ++i;

}
