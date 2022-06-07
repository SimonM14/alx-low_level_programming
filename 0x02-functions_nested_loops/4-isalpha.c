#include "main.h"


/**
 *_isalpha-checks for alphabetic characters
 *@c: the characterto be checked
 *Return: 1 (Success), 0 (otherwise)
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
