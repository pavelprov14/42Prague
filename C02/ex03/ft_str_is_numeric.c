/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 05:22:51 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/03 05:56:42 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= '0') && (*str <= '9')))
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
	char test[];
	test[] = "1524";
	char test2[];
	test2[] = "asdff";

	char test3[];
	test3[] = "54sf68dfs";

	char test4[];
	test4[] = "";

	printf("Should print 1: %d\n", ft_str_is_numeric(test));
	printf("Should print 0: %d\n", ft_str_is_numeric(test2));
	printf("Should print 0: %d\n", ft_str_is_numeric(test3));
	printf("Should print 0: %d\n", ft_str_is_numeric(test4));

	return (0);
}
*/
