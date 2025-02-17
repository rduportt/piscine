/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:14:19 by rduport           #+#    #+#             */
/*   Updated: 2024/09/05 13:34:40 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
int		verif_base(char *base, int *i);
int		ft_putnbr_base(int nbr, char *base, char *convert, int o);
int		size_tab(int nbr, char *base);
int		is_valide_base(char *base);
int		base_len(char *base, int i);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*final_tab;
	int		j;
	int		size;

	j = 0;
	if (!is_valide_base(base_from) || !is_valide_base(base_to))
		return (NULL);
	size = size_tab(ft_atoi_base(nbr, base_from), base_to);
	final_tab = malloc((size + 1) * sizeof(char));
	if (final_tab == NULL)
		return (NULL);
	if (ft_atoi_base(nbr, base_from) < 0)
		size++;
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, final_tab, size - 1);
	final_tab[size] = '\0';
	return (final_tab);
}

int	base_len(char *base, int i)
{
	while (base[i] != '\0')
		i++;
	return (i);
}

int	is_valide_base(char *base)
{
	int	j;
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base [i] == '-' || base[i] == '+' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_putnbr_base(int nbr, char *base, char *convert, int o)
{
	int		i;
	long	nb;

	nb = nbr;
	i = base_len(base, 0);
	if (nb < 0)
	{
		convert[0] = '-';
		nb = -nb;
		o--;
	}
	if (nb >= i)
		ft_putnbr_base(nb / i, base, convert, o - 1);
	convert[o] = base[nb % i];
	return (1);
}

int	size_tab(int nbr, char *base)
{
	int		size;
	int		i;
	long	nb;

	nb = nbr;
	i = base_len(base, 0);
	if (nb == 0)
		size = 1;
	else
		size = 0;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb > 0)
	{
		size++;
		nb = nb / i;
	}
	return (size);
}

/*#include <stdio.h>
int	main()
{
	char	str[] = "   -0";
	char	*result;

	result = ft_convert_base(str, "0123456789abcdef", "01");
	printf("%s", result);
	free(result);
}*/
