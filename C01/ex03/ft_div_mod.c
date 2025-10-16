/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:40:29 by pprovazn          #+#    #+#             */
/*   Updated: 2025/09/29 20:41:35 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main (void)
{
	int a = 10;
	int b = 2;

	int div = 1;
	int mod = 1;

	ft_div_mod(a, b, &div, &mod);

	printf("div: %d\ndiv address: %p\n", div, &div);
	printf("mod: %d\nmod address: %p\n", mod, &mod);

	return (0);
}
*/

/*
This function divides ‘a’ by ‘b’ and stores the result
in the integer pointed to by ‘div’. It also stores the remainder
of the division of ‘a’ by ‘b’ in the integer pointed to by ‘mod’.
*/
