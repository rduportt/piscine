/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:55:53 by rduport           #+#    #+#             */
/*   Updated: 2024/08/19 13:33:18 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	step(char *s1, char*s2, int *result)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			*result += s1[i] - s2[i];
			break ;
		}
	}
	i = 0;
	while (s2[i] != '\0' && *result == 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			*result += s1[i] - s2[i];
			break ;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	step(s1, s2, &result);
	return (result);
}

/*#include <string.h>
#include <stdio.h>
int		main()
{
	char	tab[]="abc";
	char	tab2[]="abcd";
	int i = ft_strcmp(tab,tab2);
	
	printf("%d", i);
	return 0;
}*/
