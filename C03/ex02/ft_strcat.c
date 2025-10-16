/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 05:26:33 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/09 06:03:18 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[p] != '\0')
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
	char src[] = ", jak se mas";

	char dest2[] = "Ahoj";

	printf("Result: %s\n", ft_strcat(dest, src));

	printf("Restult of an actual function: %s\n", strcat(dest2, src));

	return (0);
}
*/
