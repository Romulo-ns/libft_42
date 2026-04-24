/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:41:07 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 18:56:50 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc main.c ../ft_strlen.c -o program

#include "../libft.h"

int main ()
{
    char *test_name;

    test_name = "testando tudo...";
    printf("%s\n", test_name);

    test_name = "ft_strlen";
    printf("%s\n", test_name);
    printf("%d\n", ft_strlen("asd"));


    return (0);
}
