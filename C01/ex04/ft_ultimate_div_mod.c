/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:25:31 by rduport           #+#    #+#             */
/*   Updated: 2024/08/16 21:14:01 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		bufferdiv;
	int		buffermod;

	bufferdiv = *a / *b;
	buffermod = *a % *b;
	*a = bufferdiv;
	*b = buffermod;
}
