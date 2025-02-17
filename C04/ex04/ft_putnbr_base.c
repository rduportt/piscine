/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:31:17 by rduport           #+#    #+#             */
/*   Updated: 2024/08/26 22:00:57 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_valide_base(char *base, int *i)
{
	int	j;

	j = 0;
	while (base[*i] != '\0')
	{
		if (base [*i] == '-' || base[*i] == '+')
			return (0);
		j = *i + 1;
		while (base[j] != '\0')
		{
			if (base[*i] == base[j])
				return (0);
			j++;
		}
		*i = *i + 1;
	}
	if (*i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long long	nb;

	nb = nbr;
	i = 0;
	if (!is_valide_base(base, &i))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= i)
		ft_putnbr_base(nb / i, base);
	write(1, &base[nb % i], 1);
}

/*int	main()
{
	int nbr = -2147483648;
	ft_putnbr_base(nbr,"01");
}*/
