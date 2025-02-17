/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:09:01 by rduport           #+#    #+#             */
/*   Updated: 2024/09/04 11:58:36 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int		j;

	j = 0;
	while (src[j] != '\0')
		j++;
	tab = (char *) malloc((j + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

/*#include <string.h>
int	main()
{
	char	src[] = "abc";
	char *dup;
	dup = ft_strdup(src);	
	printf("%s\n",dup);
	free(dup);
	return 0;
}*/
