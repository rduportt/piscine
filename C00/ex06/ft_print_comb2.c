/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:57:46 by rduport           #+#    #+#             */
/*   Updated: 2024/08/16 11:39:23 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putcharr(char c)
{
	write(1, &c, 1);
}

void	display(int nb)
{
	int	first;
	int	second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		ft_putcharr(first + 48);
		ft_putcharr(second + 48);
	}
	else
	{
		ft_putcharr('0');
		ft_putcharr(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 0;
	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			display(number1);
			ft_putcharr(' ');
			display(number2);
			if (number1 != 98 || number2 != 99)
			{
				ft_putcharr(',');
				ft_putcharr(' ');
			}
			number2++;
		}
		number1++;
	}
}
