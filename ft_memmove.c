/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:41:40 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/23 20:11:36 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;

    if (!dest && !src)
        return NULL;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;

    if (d < s)
    {
        while (n > 0)
        {
            *d = *s;
            d++;
            s++;
            n--;
        }
    }
    else 
    {
        s += n;
        d += n;
        while (n > 0)
        {
            *d = *s;
            n--;
            d++;
            s++;
        }
    }
    return (dest);
}