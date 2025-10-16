/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovotny <lnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:57:38 by lnovotny          #+#    #+#             */
/*   Updated: 2025/09/28 16:58:26 by lnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int col, int row)
{
	if ((col == 0 || col == x - 1) && (row == 0 || row == y - 1))
	{
		write(1, "o", 1);
	}
	else if (row == 0 || row == y - 1)
	{
		write(1, "-", 1);
	}
	else if (col == 0 || col == x - 1)
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
