/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:21:06 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/15 19:27:26 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (result < nb)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

/*
int	main(void)
{
	int	test;

	test = -10;
	printf("Result of factorial is: %d\n", ft_recursive_factorial(test));

	return (0);
}
*/
