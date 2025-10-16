/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@studen.42prague.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 06:52:20 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 09:09:44 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	if (to_find[p] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + p] == to_find[p] && str[i + p] != '\0')
		{
			p++;
			if (to_find[p] == '\0')
			{
				return (str + i);
			}
		}
		i++;
		p = 0;
	}
	return (0);
}

/*
int	main(void)
{
	char *str = "Hello, how are you? Nice to meet you.";
	char *toFind = "yo";

	printf("Sourc string: %s\n", str);
	printf("What I'm looking for: %s\n", toFind);
	printf("Result: %s\n", ft_strstr(str, toFind));

	return (0);
}
*/
