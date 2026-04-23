/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:14:09 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/23 17:47:01 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    unsigned char *sta;

    i = 0;
    sta = (unsigned char *)s;

    while (i < n)
    {
        sta[i] = (unsigned char *)c;
        i++;
    }
    return (s);
}
