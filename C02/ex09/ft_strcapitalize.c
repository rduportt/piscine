/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:38:10 by rduport           #+#    #+#             */
/*   Updated: 2024/08/19 15:30:18 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	step(char *str, int *boolean, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (*boolean == 0)
		{
			str[i] -= 32;
			*boolean = 1;
		}
	}
	else if (str[i] >= '0' && str[i] <= '9')
		*boolean = 1;
	else
		*boolean = 0;
}

char	*ft_strcapitalize(char *str)
{
	int		boolean;
	int		i;

	i = 0;
	boolean = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		step(str, &boolean, i);
		i++;
	}
	return (str);
}
