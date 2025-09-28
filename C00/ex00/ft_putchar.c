#include <unistd.h>

void	ft_putcharTEST(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_putcharTEST('u');
	return(0);
}
*/
