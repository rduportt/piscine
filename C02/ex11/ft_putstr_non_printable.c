/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:11:50 by rduport           #+#    #+#             */
/*   Updated: 2024/08/20 09:34:34 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	tab[5]={30};
	ft_putstr_non_printable(tab);
	return 0;
}*/
