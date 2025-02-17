/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:58:00 by rduport           #+#    #+#             */
/*   Updated: 2024/08/28 10:17:39 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (i * (nb / i) == nb)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_is_prime(0));
}*/
