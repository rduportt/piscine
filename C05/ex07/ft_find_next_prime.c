/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:11:14 by rduport           #+#    #+#             */
/*   Updated: 2024/08/29 10:51:06 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long	i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i * i <= nb)
	{
		if (i * (nb / i) == nb)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_find_next_prime(25));
}*/
