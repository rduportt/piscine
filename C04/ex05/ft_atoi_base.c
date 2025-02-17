/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:25:21 by rduport           #+#    #+#             */
/*   Updated: 2024/09/02 11:51:34 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_base(char *base, char *str, int i)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (base[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int	pos_in_base(char str, char *base)
{
	int	j;

	j = 0;
	while (base[j] != str)
		j++;
	return (j);
}

void	verif_str(char *str, int *buffer, int base_len, char *base)
{
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
			while ((str[i + 1] == 32 || (str[i + 1] >= 9 && str[i + 1] <= 13)))
				i++;
		else if (str[i] == '-' && flag == 0)
			buffer[1] = buffer[1] * -1;
		else if (str[i] == '+' && flag == 0)
			buffer[1] = +buffer[1];
		else if (check_base(base, str, i) == 1)
		{
			buffer[0] = buffer[0] * base_len + pos_in_base(str[i], base);
			flag = 1;
		}
		else
			break ;
		i++;
	}
}

int	verif_base(char *base, int *i)
{
	int	j;

	j = 0;
	while (base[*i] != '\0')
	{
		if (base [*i] == '-' || base[*i] == '+' || base[*i] == ' '
			|| (base[*i] >= 9 && base[*i] <= 13))
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

int	ft_atoi_base(char *str, char *base)
{
	int		buffer[2];
	int		base_len;

	base_len = 0;
	buffer[0] = 0;
	buffer[1] = 1;
	if (verif_base(base, &base_len) == 0)
		return (0);
	verif_str(str, buffer, base_len, base);
	if (str[0] == '\0')
		return (0);
	buffer[0] *= buffer[1];
	return (buffer[0]);
}
/*#include <stdio.h>
int	main()
{
	char	tab[] = "\t\r\r\n   	---ff";
	char	base[] = "0123456789abcdef";
	printf("%d\n",ft_atoi_base("0","12"));
	printf("%d\n",ft_atoi_base("",""));
	printf("%d\n",ft_atoi_base("123","12345+"));
	printf("%d\n",ft_atoi_base("- -123","01"));
	printf("%d\n",ft_atoi_base("123","01-"));
	printf("%d\n",ft_atoi_base("123-23","01"));
	printf("%d",ft_atoi_base(tab,base));
}*/
