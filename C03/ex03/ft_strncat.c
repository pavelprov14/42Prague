/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 08:39:49 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 06:51:01 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[p] != '\0' && p < nb)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[] = "Ahoj";
	char dest2[] = "Ahoj";
	char src[] = ", jak se mas";
	unsigned int n = 8;

	printf("Result: %s\n", ft_strncat(dest, src, n));
	printf("Result of an actual funciton: %s\n", strncat(dest2, src, n));

	return (0);
}
*/
