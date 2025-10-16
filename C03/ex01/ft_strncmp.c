/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 05:28:36 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/08 08:27:32 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i])
		&& (i < n - 1))
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*
int	main(void)
{
	int n = 3;

	char test[] = "hhhaa";
	char test1[] = "hhaaa";

	printf("Result:%d\n", ft_strncmp(test, test1, n));

	return (0);
}
*/
