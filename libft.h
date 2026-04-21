/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:48:46 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/21 16:56:19 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;


int     ft_isalpha  (int c);
int     ft_isdigit  (int c);
int     ft_isalnum  (int c);
int     ft_isascii  (int i);


#endif