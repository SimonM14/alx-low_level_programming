#include <stdio.h>

/**
 *main - prints the alphabet out in lowercase 
 *and then in uppercase
 *and then adds a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char ap;
for (ap = 'a'; ap <= 'z'; ap++)
putchar(ap);
for (ap = 'A'; ap <= 'Z'; ap++)
putchar(ap);
putchar('\n');
return (0);
}
