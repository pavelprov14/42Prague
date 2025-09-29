#include <unistd.h>
#include <stdio.h>

void 	ft_ultimate_div_mod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;

	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int first = 10;
	int second = 2;

	ft_ultimate_div_mod(&first, &second);

	printf("div: %d\ndiv address: %p\n", first, &first);
	printf("mod: %d\nmod address: %p\n", second, &second);
}
*/

/*
This function divides the value pointed to by ‘a’ by the value pointed to by ‘b’. The result of the division is stored in the integer pointed to by ‘a’, while the remainder is stored in the integer pointed to by ‘b’.
*/
