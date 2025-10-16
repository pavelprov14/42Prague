/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 04:30:26 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/08 05:27:30 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((s1[i] - s2[i]) < 0)
	{
		return (s1[i] - s2[i]);
	}
	else if ((s1[i] - s2[i] > 0))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char test[] = "Hello";
	char test1[] = "Hello in czech Ahoj";

	printf("Result negative: %d\n", ft_strcmp(test, test1));
	printf("Restult positive: %d\n", ft_strcmp(test1, test));
	
	int result;
	result = strcmp(test, test1);
	printf("strcmp(test, test1) = %d\n", result);

	return (0);
}
*/
