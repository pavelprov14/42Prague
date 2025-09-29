#include <unistd.h>
// #include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;	// the value of int x is set to 42
}

/*
int	main(void)
{
    int x = 0;         // start with some value

    ft_ft(&x);         // pass the address of x

    printf("%p\n%d\n", &x, x); // &x si an address, x is a value on that address and should now be 42
 }
*/
