/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:58:29 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/04 15:02:48 by romdo-na         ###   ########.fr       */
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

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;

    while (n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return(dest);
}

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	sublen;
	char	*trimmed;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = len - 1;
	while (j > i && is_set(s1[j], set))
		j--;
	sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 2));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen + 1);
	trimmed[sublen + 1] = '\0';
	return (trimmed);
}

int main ()
{
    char ptr[] = "xaksormcivfjCxasXxxxx";
    printf("%s", ft_strtrim(ptr, "x"));
}