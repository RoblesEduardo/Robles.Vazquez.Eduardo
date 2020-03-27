#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
  char c;
  while(c != EOF)
  {
    c = fgetc(stdin);
    if(isalnum(c))
      printf("%c\n", c);
    else
      c = fgetc(stdin);
  }
  return 1;
}
