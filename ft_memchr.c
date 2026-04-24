/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:10:51 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 21:49:48 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i <= n)
    {
        if (ptr[i] == c)
            return (&ptr[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char str[] = "Hello World";

//     char *result = memchr(str, 'W', 11);

//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return 0;
// }