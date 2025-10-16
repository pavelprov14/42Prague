/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:26:19 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 12:33:11 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int     main(void)
{
        char test[] = "TESTING MY FUNCTION";
        char test1[] = "STJGWRk dLK 66";

        printf("Original1: %s\n", test);
        printf("Original1 all capital: %s\n", ft_strlowcase(test));
        printf("Original2: %s\n", test1);
        printf("Original2 all capital: %s\n", ft_strlowcase(test1));

        return (0);
}
*/
