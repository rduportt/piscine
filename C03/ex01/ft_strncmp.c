/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:55:53 by rduport           #+#    #+#             */
/*   Updated: 2024/08/20 13:13:02 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	step(int *result, char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
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
	while (s2[i] != '\0' && *result == 0 && i < n)
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = 0;
	step(&result, s1, s2, n);
	return (result);
}

/*#include <string.h>
#include <stdio.h>
int		main()
{
	char	tab[]="abc";
	char	tab2[]="abcd";
	unsigned int n =4;
	int i = ft_strncmp(tab,tab2,n);
	
	printf("%d", i);
	return 0;
}*/
