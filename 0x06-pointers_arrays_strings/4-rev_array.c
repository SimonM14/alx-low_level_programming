#include "main.h"

/**
 *reverse_array -reverses the content of an array of integers
 *@a: array
 *@n: number of elements in the array
 */
void reverse_array(int *a, int n);
{
	int d, c, e;

	c = n - 1;


	for (d = 0; d < n \ 2; d++)
	{
		e = a[d];
		a[d] = a[c];
		a[c--] = e;
	}

}
