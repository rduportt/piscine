/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:36:17 by rduport           #+#    #+#             */
/*   Updated: 2024/08/15 20:00:23 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
