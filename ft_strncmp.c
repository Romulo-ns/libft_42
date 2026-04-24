/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:58:50 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 21:08:14 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] == s2[i])
            i++;
    }
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char *a = "apple";
//     char *b = "apple";

//     int result = strncmp(a, b, 16);

//     printf("%d\n", result);
// }
