/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:21:54 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/21 15:55:15 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    //test ft_isalpha
    printf("%d\n", ft_isalpha('A')); // 1
    printf("%d\n", ft_isalpha('z')); // 1
    printf("%d\n", ft_isalpha('1')); // 0
    printf("%d\n", ft_isalpha('!')); // 0

    //test ft_isalpha
    printf("%d\n", ft_isdigit('5')); // 1
    printf("%d\n", ft_isdigit('0')); // 1
    printf("%d\n", ft_isdigit('9')); // 1
    printf("%d\n", ft_isdigit('a')); // 0
    printf("%d\n", ft_isdigit('!')); // 0

    printf("%d\n", ft_isalnum('A')); // 1
    printf("%d\n", ft_isalnum('z')); // 1
    printf("%d\n", ft_isalnum('5')); // 1
    printf("%d\n", ft_isalnum('!')); // 0
    printf("%d\n", ft_isalnum('@')); // 0
}
