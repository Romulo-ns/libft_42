/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:58:29 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/29 20:10:07 by romdo-na         ###   ########.fr       */
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

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *ptr;
    
    start = 0;
    end = ft_strlen(s1);
    i = 0;
    while (s1[start] == set)
        start++;
    while (s1[end] == set)
        end--;
    while (start <= end)
    {
        ptr[i] = s1[start];
        start++;
    }
    
    return (ptr);
}

int main ()
{
    char ptr[] = "xaksormcivfjCxasXxxxx";
    printf("%s", ft_strtrim(ptr, "x"));
}