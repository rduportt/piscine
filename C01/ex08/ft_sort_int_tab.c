/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:37:24 by rduport           #+#    #+#             */
/*   Updated: 2024/08/16 14:43:42 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		buffer;
	int		i;
	int		j;

	i = size;
	j = 0;
	buffer = 0;
	while (i > 0)
	{
		j = 0;
		while (j < i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				buffer = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		i--;
	}
}
