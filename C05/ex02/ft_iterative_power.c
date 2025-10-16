/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@studen.42prague.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:29:31 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/15 20:01:27 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (result);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
int	main(void)
{
	int	base;
	int	power;

	base = 2;
	power = 5;
	printf("Result: %d\n", ft_iterative_power(base, power));

	return (0);
}
*/
