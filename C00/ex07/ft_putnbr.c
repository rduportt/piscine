/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:11:37 by rduport           #+#    #+#             */
/*   Updated: 2024/08/16 11:34:25 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	nbneg(int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
}

void	reorder(char *bufferv2, char *buffer, int i, int j)
{
	while (i >= 0)
	{
		i--;
		bufferv2[j] = buffer[i];
		j++;
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[10];
	char	bufferv2[10];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nbneg(&nb);
	while (nb != 0)
	{
		buffer[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	reorder(bufferv2, buffer, i, j);
	write(1, bufferv2, 10);
}
