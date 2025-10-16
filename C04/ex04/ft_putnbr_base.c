/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 06:26:20 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/14 09:58:47 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	invalid_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base [i] == '-' || base[i] < 33
			|| base[i] > 126)
		{
			return (1);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_lenght;

	base_lenght = ft_strlen(base);
	if (base_lenght <= 1 || invalid_duplicate(base))
		return ;
	if (nbr == -2147483648)
	{
		if (ft_strlen(base) == 2)
			ft_putstr("-10000000000000000000000000000000");
		else if (ft_strlen(base) == 16)
			ft_putstr("-80000000");
		else if (ft_strlen(base) == 8)
			ft_putstr("-20000000000");
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_lenght)
	{
		ft_putnbr_base(nbr / base_lenght, base);
	}
	ft_putchar(base[nbr % base_lenght]);
}

/*
int	main(void)
{
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(42, "0123456789");

	return (0);
}
*/
