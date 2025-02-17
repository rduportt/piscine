/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduport <rduport@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:41:31 by rduport           #+#    #+#             */
/*   Updated: 2024/08/22 10:28:04 by rduport          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	i = 0;

	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[]="abc";
	char dest[10];
	printf("%zu\n", strlcpy(dest,src,2));
	printf("%s\n", dest);
	printf("%d", ft_strlcpy(dest,src,2));
	return 0;
}*/
