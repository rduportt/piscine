/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:11:37 by rduport           #+#    #+#             */
/*   Updated: 2024/08/26 22:01:18 by rduport          ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	char	buffer[10];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (nb == 0)
		write(1, "0", 1);
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
	while (--i >= 0)
		write(1, &buffer[i], 1);
}

/*int	main()
{
	ft_putnbr(2147483647);
}*/
