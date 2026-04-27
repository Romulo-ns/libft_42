/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:37:15 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/27 20:47:52 by romdo-na         ###   ########.fr       */
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

char *ft_strdup(const char *s)
{
    int i;
    int size;
    char *ptr;

    size = ft_strlen(s);
    ptr = malloc(sizeof(char) * (size + 1));
    if (!ptr)
        return(NULL);
    
    i = 0;
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';

    return(ptr);
}

// int main(void)
// {
//     char *str = "42 Porto";
//     char *dup = ft_strdup(str);

//     printf("Original: %s\n", str);
//     printf("Copy: %s\n", dup);

//     free(dup);
//     return (0);
// }