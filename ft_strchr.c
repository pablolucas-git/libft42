/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:02:25 by marvin            #+#    #+#             */
/*   Updated: 2022/07/31 19:02:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strchr(const char *st, int c)
{
    int i;

    i = 0;
    while (st[i] != '\0' && st[i] != c)
        i++;
    return ((char *) &(st[i]));
}


/*int main()
{
    char    *str = "hoalkdssahhg";
    printf("%s", ft_strchr(str, 'l'));
}*/
