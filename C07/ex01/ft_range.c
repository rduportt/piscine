/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:36:40 by rduport           #+#    #+#             */
/*   Updated: 2024/08/30 12:45:52 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	buff;
	int	i;

	i = 0;
	buff = min;
	tab = NULL;
	if (min >= max)
		return (NULL);
	tab = (int *) malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (buff < max)
	{
		tab[i++] = buff;
		buff ++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main()
{
	int i = 0;
	int	*tab=ft_range(-200,900);
	while(i < 1100)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
}*/
