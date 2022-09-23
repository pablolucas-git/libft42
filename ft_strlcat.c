/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprieto- <pprieto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:46:10 by pprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 21:46:14 by pprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
/* devuelve longitud del src + size (si es menor a la longitus del dest), 
o longitud del src + la longitus del dest*/

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	j;
	size_t	i;
	size_t	lon_d;
	size_t	lon_s;

	lon_s = ft_strlen(src);
	lon_d = ft_strlen(dest);
	i = 0;
	j = lon_d;
	if (lon_d >= size)
		return (lon_s + size);
	if (size > 0)
	{	
		while (src[i] != '\0' && ((lon_d + i) < (size - 1)))
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	return (lon_d + lon_s);
}

/*int main(){
	char str1[70] = "asdf";
	char str2[70] = "";
	char str1_2[70] = "asdf";
	char str2_2[70] = "";


	
	printf("Original_return: %lu\n", strlcat(str2, str1, 30));
	printf("Original: %s\n", str2);
	printf("Replica_return: %lu\n", ft_strlcat(str2_2, str1_2, 30));
	printf("Replica: %s\n", str2_2);
}*/