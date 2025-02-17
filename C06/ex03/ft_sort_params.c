/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:55:53 by rduport           #+#    #+#             */
/*   Updated: 2024/08/27 16:40:41 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	bubble_sort(char **argv, int argc)
{
	char	*buffer;
	int		i;
	int		j;

	i = argc;
	j = 0;
	buffer = 0;
	while (i > 0)
	{
		j = 1;
		while (j < i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				buffer = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = buffer;
			}
			j++;
		}
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	bubble_sort(argv, argc);
	while (i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}
