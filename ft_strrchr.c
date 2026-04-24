/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:50:56 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 20:55:43 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i--;
    }
    return (NULL);
}

// int main(void)
// {
//     char str[] = "hello world";
//     char *result;

//     result = strrchr(str, 'o');

//     if (result != NULL)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return 0;
// }
