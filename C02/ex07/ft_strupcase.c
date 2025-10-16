/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:13:42 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 12:24:22 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char test[] = "testing my funciton";
	char test1[] = "STJGWRk dLK 66";

	printf("Original1: %s\n", test);
	printf("Original1 all capital: %s\n", ft_strupcase(test));
	printf("Original2: %s\n", test1);
	printf("Original2 all capital: %s\n", ft_strupcase(test1));

	return (0);
}
*/
