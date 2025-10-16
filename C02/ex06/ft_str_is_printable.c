/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:54:38 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/07 20:51:32 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!((*str <= 127) && (*str >= 32)))
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
	char test[] = "safj545";
	char test1[] = "/..;fg";
	char test2[] = "\n";
	char test3[] = "fdj\tssdf";

	printf("Should be 1: %d\n", ft_str_is_printable(test));
	printf("Should be 1: %d\n", ft_str_is_printable(test1));
	printf("Should be 0: %d\n", ft_str_is_printable(test2));
	printf("Should be 0: %d\n", ft_str_is_printable(test3));
}
*/
