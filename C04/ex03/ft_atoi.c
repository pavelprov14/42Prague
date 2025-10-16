/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 05:41:06 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/14 06:24:44 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	operator;
	int	num;

	operator = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			operator = operator * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * operator);
}

/*
int	main(void)
{
	// char test[] = "16454";
	// char test1[] = "456sgs";
	char test2[] = "---+--+1234ab567";
	char test3[] = "--+--+1234ab567";

	printf("Result: %d\n", ft_atoi(test2));
	printf("Result1: %d\n", ft_atoi(test3));

	return (0);
}
*/
