/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 06:36:07 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 04:59:35 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(((*str >= 'a') && (*str <= 'z'))
				|| ((*str >= 'A') && (*str <= 'Z'))))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char test[] = "Ahojakosemas";
	char testN[] = "co78.,f.";
	char test3[] = " ";

	printf("Testing str1: %d\n", *test);
	printf("Shoul be 1: %d\n", ft_str_is_alpha(test));
	printf("Should be 0: %d\n", ft_str_is_alpha(testN));
	printf("Should be 0: %d\n", ft_str_is_alpha(test3));

	return (0);
}
*/
