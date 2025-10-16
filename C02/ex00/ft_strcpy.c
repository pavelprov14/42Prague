/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprovazn <pprovazn@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 05:50:23 by pprovazn          #+#    #+#             */
/*   Updated: 2025/10/07 20:53:59 by pprovazn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}

/*
int	main(void)
{
	char src[] = "Buenos dias!";
	char dest[100];

	ft_strcpy(dest, src);

	printf("First string %s\n", src);
	printf("Second string %s\n", dest);

	return(0);
}
*/
