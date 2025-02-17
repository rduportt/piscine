/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:29:03 by rduport           #+#    #+#             */
/*   Updated: 2024/08/30 12:48:17 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	start;

	start = 0;
	i = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < max)
	{
		(*range)[start] = i;
		start++;
		i++;
	}
	return (max - min);
}

/*#include <stdio.h>
int	main()
{
	int *range;
	int	i;
	int	size;

	size = ft_ultimate_range(&range, 1, 9);
	i = 0;

	printf("%d\n", size);
	while(i < size)
	{
		printf("%d", range[i]);
		i++;
	}
	free(range);
}*/
