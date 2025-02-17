/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:20:48 by rduport           #+#    #+#             */
/*   Updated: 2024/09/05 13:22:25 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_cpystrs_tab(int size, char *tab, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			tab[k++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
			while (sep[j] != '\0')
				tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
}

int	ft_total_char(char **strs, int size)
{
	int	j;
	int	total;
	int	i;

	i = 0;
	total = 0;
	j = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			total ++;
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		total;
	char	*tab;

	i = 0;
	k = 0;
	total = 0;
	tab = NULL;
	if (size == 0)
	{
		tab = malloc(1);
		if (tab == NULL)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	total = ft_total_char(strs, size);
	while (sep[i] != '\0')
		i++;
	tab = malloc((total + (i * (size - 1)) + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	ft_cpystrs_tab(size, tab, strs, sep);
	return (tab);
}

/*#include <stdio.h>
int	main()
{
	char	*strs[] = {
	"Test1",
	"Test2",
	"Test3"
	};
	char	sep[]=", ";
	char	*result;
	int		size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("%s", result);
	free(result);
}*/
