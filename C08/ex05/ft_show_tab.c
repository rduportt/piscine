/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:56:34 by rduport           #+#    #+#             */
/*   Updated: 2024/09/05 14:03:26 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[10];
	int		i;
	int		j;
	long	nbr;

	i = 0;
	j = 0;
	nbr = nb;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nb;
	}
	while (nbr != 0)
	{
		buffer[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	while (--i >= 0)
		write(1, &buffer[i], 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr((par[i]).str);
		write(1, "\n", 1);
		ft_putnbr((par[i]).size);
		write(1, "\n", 1);
		ft_putstr((par[i]).copy);
		write(1, "\n", 1);
		i++;
	}
}
