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
    char *s;

    i = 0;
    s = st;
    while (s[i] != '\0' && s[i] != c)
        i++;
    return (&(s[i]));
}


int main()
{
    char    *str = "hoalkdssahhg";
    printf("%s", ft_strchr(str, 'l'));
}
