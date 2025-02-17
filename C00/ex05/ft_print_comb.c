/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:24:24 by rduport           #+#    #+#             */
/*   Updated: 2024/08/15 20:20:02 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putcharv2(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (c != '9' || b != '8' || a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	number1;
	int	number2;
	int	number3;

	number1 = '0';
	number3 = '0';
	number2 = '1';
	while (number1 <= '7')
	{
		while (number2 < '9')
		{
			number3 = number2;
			while (number3 < '9')
			{
				number3++;
				ft_putcharv2(number1, number2, number3);
			}
			number2++;
		}
		number1++;
		number2 = number1 + 1;
	}
}
