/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:57:21 by rduport           #+#    #+#             */
/*   Updated: 2024/08/15 22:30:53 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		buffer;

	i = 0;
	buffer = 0;
	while (i < size / 2)
	{
		buffer = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = buffer;
		i++;
	}
}
