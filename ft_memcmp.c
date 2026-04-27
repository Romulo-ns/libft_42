/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:49:16 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/27 16:28:57 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *p1;
    unsigned char *p2;

    i = 0;
    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return(p1[i] - p2[i]);
        i++;
    }
    return(0);
}

int main ()
{
    char *x;
    char *y;
    int i;

    x = "abb";
    y = "abc";
    i = 10;
    printf("%i", ft_memcmp(x, y, i));
}
