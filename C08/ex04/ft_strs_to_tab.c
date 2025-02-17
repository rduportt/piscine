/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:18:14 by rduport           #+#    #+#             */
/*   Updated: 2024/09/05 13:57:57 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
/*
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
	while(str[i])
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
	while(par[i].str != 0)
	{
		ft_putstr((par[i]).str);
		write(1, "\n", 1);
		ft_putnbr((par[i]).size);
		write(1, "\n", 1);
		ft_putstr((par[i]).copy);
		write(1, "\n", 1);
		i++;
	}
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		j;

	j = 0;
	while (src[j] != '\0')
		j++;
	tab = (char *) malloc((j + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*structure;

	i = 0;
	structure = malloc((ac + 1) * sizeof(t_stock_str));
	if (structure == NULL)
		return (NULL);
	while (i < ac)
	{
		structure[i].size = ft_strlen(av[i]);
		structure[i].str = av[i];
		structure[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (structure);
}

/*int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}*/
