/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:10:55 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/21 20:25:14 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int testing_isalnum ()
{
    int error_count;

    error_count = 0;
    if (ft_isalnum('a') != isalnum('a')) 
        error_count++;
    if (ft_isalnum('1') != isalnum('1')) 
        error_count++;
    if (ft_isalnum('0') != isalnum('0')) 
        error_count++;
    if (error_count > 0)
    {
        return ("error");
    }
    else return ("ok");
}

int main ()
{
    printf("test all function");
    printf("%s",testing_isalnum());
}