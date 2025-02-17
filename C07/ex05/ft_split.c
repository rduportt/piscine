/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:06:21 by rduport           #+#    #+#             */
/*   Updated: 2024/09/04 17:26:41 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*str_dup(char *src, int *start, int *i)
{
	char	*tab;
	int		index;
	int		j;

	j = -1;
	index = 0;
	tab = (char *)malloc(sizeof(char) * (*i - *start) + 1);
	if (tab == NULL)
		return (NULL);
	while (*start != *i)
	{
		tab[index] = src[*start];
		index++;
		*start = *start + 1;
	}
	tab[index] = '\0';
	return (tab);
}

int	is_charset(char *charset, char str)
{
	int	j;

	j = -1;
	while (charset[++j])
		if (charset[j] == str)
			return (1);
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	j;
	int	buffer;
	int	size;

	size = 0;
	i = 0;
	j = 0;
	buffer = 0;
	while (str[i])
	{
		buffer = i;
		j = 0;
		while (charset[j])
		{
			while (is_charset(charset, str[i]))
				i++;
			j++;
		}
		if (buffer != i)
			size++;
		else
			i++;
	}
	return (size + 2);
}

//i = 0
//j = 1
//k = 2
//start = 3
//buffer = 4

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		var[5];

	var[0] = 0;
	var[1] = -1;
	var[2] = -1;
	var[3] = 0;
	split = (char **)malloc(ft_size(str, charset) * sizeof(char *));
	while (str[var[0]] != '\0')
	{
		var[1] = -1;
		var[4] = var[0];
		while (is_charset(charset, str[var[0]]))
			var[0]++;
		if (var[4] != var[0] && var[4] - var[3] > 0)
			split[++var[2]] = str_dup(str, &var[3], &var[4]);
		if (var[4] != var[0])
			var[3] = var[0];
		else
			var[0]++;
	}
	if (str[var[0]] == '\0' && !is_charset(charset, str[var[0] - 1]))
		split[++var[2]] = str_dup(str, &var[3], &var[0]);
	split[++var[2]] = NULL;
	return (split);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int	index;	
	char **tab = ft_split(argv[1], argv[2]);
	
	index = -1;
	while(tab[++index])
		printf("%s\n", tab[index]);
	index = -1;
	while(tab[++index])
		free(tab[index]);
	free(tab);
}*/
