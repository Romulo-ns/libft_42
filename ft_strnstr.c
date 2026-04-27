/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:32:45 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/27 19:05:52 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)haystack;
    p2 = (unsigned char *)needle;

    if (!p2[0])
        return ((char *)haystack);

    i = 0;
    while (p1[i] && i < len)
    {
        j = 0;
        while (p2[j] && (i + j) < len && p1[i + j] == p2[j])
        {
            j++;
        }
        if (!p2[j])
            return ((char *)&p1[i]);
        i++;
    }
    return (NULL);
}

// int main ()
// {
//     char    *x;
//     char    *y;
//     size_t  i;

//     x = "abcdefghijx";
//     y = "fghij";
//     i = 6;

//     printf("%s\n", ft_strnstr(x, y, i));
// }