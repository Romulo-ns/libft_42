/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:56:32 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/28 17:30:56 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *result;
    size_t  i;
    size_t  s_len;

    if (!s)
        return NULL;

    s_len = ft_strlen(s);

    if (start >= s_len)
    {
        result = (char *)malloc(1);
        if (!result)
            return NULL;
        result[0] = '\0';
        return result;
    }

    if (len > s_len - start)
        len = s_len - start;

    result = (char *)malloc(len + 1);
    if (!result)
        return NULL;

    i = 0;
    while (i < len)
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';

    return result;
}