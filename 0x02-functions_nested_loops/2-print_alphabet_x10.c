#include "main.h"

/**
 *print_alphabet_x10 -prints the alphabet in lower case
 *followed by a new line
 *return:Always 0 (Success)
 */

void print_alphabet_x10(void)
{

char i;
int x;
x = 0;
while (x < 10)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
x++;
}
}
