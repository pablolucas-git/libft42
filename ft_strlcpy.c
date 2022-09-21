/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprieto- <pprieto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:36:31 by pprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 21:35:37 by pprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] != '\0' )
	{
		if (size > 1 && i < size - 1)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char str[] = "abcdef";
	char dest[10];
	printf("\033[0;32mMIA: %li - %s\n", ft_strlcpy(dest, str, 5), dest);
	char str2[] = "abcdef";
	char dest2[10];
	printf("\033[0;34mORIGINAL: %i - %s\n\033[0m", strlcpy(dest2, str2, 5), dest2);
}*/