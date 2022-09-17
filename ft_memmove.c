/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprieto- <pprieto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:25:09 by pprieto-          #+#    #+#             */
/*   Updated: 2022/07/31 13:25:09 by pprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*aux;
	size_t	i;

	i = 0;
	aux = NULL;
	while (i < n)
	{
		((unsigned char *) aux)[i] = ((unsigned char *) src)[i];
		i++;
	}
	i = 0;
	while (((unsigned char *)aux)[i] != (unsigned int) NULL)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) aux)[i];
		i++;
	}
	return (dest);
}