/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:58:54 by rduport           #+#    #+#             */
/*   Updated: 2024/09/02 14:57:11 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	verif(char *str, int *buffer)
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
			buffer[0] = buffer[0] * -1;
		else if (str[i] == '+' && flag == 0)
			buffer[0] = +buffer[0];
		else if (str[i] >= '0' && str[i] <= '9')
		{
			buffer[1] = buffer[1] * 10 + (str[i] - '0');
			flag = 1;
		}
		else
			break ;
		i++;
	}
}

int	ft_atoi(char *str)
{
	int		buffer[15];
	float	k;
	int		result;

	result = 0;
	k = 0.1;
	buffer[0] = 1;
	buffer[1] = 0;
	verif(str, buffer);
	if (str[0] == '\0')
		return (0);
	result = buffer[1] * buffer[0];
	return (result);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n",ft_atoi("0"));
	printf("%d\n",ft_atoi("    ----23445"));
	printf("%d\n",ft_atoi("  - -+--1234235"));
	printf("%d\n",ft_atoi("  ----124 234"));
	printf("%d\n",ft_atoi("--1434-35"));
	printf("%d\n",ft_atoi("2147483647"));
	printf("%d\n",ft_atoi("-2147483648"));
	printf("%d\n",ft_atoi(""));

	return 0;
}*/
