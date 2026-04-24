/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:37:48 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 20:48:42 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     char str[] = "hello world";
//     char *result;

//     result = strchr(str, 'd');

//     if (result != NULL)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return 0;
// }
