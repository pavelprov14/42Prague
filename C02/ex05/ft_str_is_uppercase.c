/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@studen.42prague.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 08:34:19 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/07 18:52:11 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char test[] = "AFD";
	char test1[] = "sjfhgh";
	char test2[] = "54564";

	printf("Should be 1:%d\n", ft_str_is_uppercase(test));
	printf("Should be 0:%d\n", ft_str_is_uppercase(test1));
	printf("Should be 0:%d\n", ft_str_is_uppercase(test2));

	return (0);
}
*/
