#include <ctype.h>
#include <stdio.h>
int main(void)
{
  char c;
  
  c = 'a';
  
  printf("%c: %d\n", c, isupper(c));
return (0);
}
