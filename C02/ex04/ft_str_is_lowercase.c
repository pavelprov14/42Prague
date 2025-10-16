/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 05:58:32 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/07 18:47:41 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a') && (*str <= 'z'))
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
	char test[] = "sfdasfppwemg";

	char test1[] = "54515";

	char test2[] = "sfdsaf ";

	printf("Should be 1: %d\n", ft_str_is_lowercase(test));
	printf("Should be 0: %d\n", ft_str_is_lowercase(test1));
	printf("Should be 0: %d\n", ft_str_is_lowercase(test2));

	return (0);
}
*/
