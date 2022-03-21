#include "main.h"
/**
 *swap_int - Updates the value of the parameter to 98
 *@a: The value
 *@b: The value
 *
 *Return: None
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
