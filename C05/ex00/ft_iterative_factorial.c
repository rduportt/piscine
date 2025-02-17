/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:48:40 by rduport           #+#    #+#             */
/*   Updated: 2024/08/28 10:16:44 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

/*#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_factorial(9));
}*/
