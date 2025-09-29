#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
	int swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main (void)
{
	int value1 = 24;
	int value2 = 42;

	ft_swap(&value1, &value2);

	printf("value 1: %d\nvalue 2: %d\n", value1, value2);
	return(0);
}
*/

/*
Create a function that swaps the values of two integers using their addresses received as parameters.
*/
