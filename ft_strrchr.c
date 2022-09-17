/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprieto- <pprieto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:44:55 by pprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 21:46:58 by pprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strrchr(const char *st, int c)
{
    int i;
	int	j;

    i = 0;
	j = 0;
    while (st[i] != '\0')
	{
		if (st[i] == c)
			j = i;
        i++;
	}
	if (c == 0)
    	return ((char *) &(st[i]));
	return ((char *) &(st[j]));
}

/*
int main()
{
    char    *str = "hoalkdslahhg";
    printf("%s", ft_strrchr(str, 'l'));
}
*/