/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:48:46 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/23 20:10:38 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
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
int     ft_isprint  (int i);
int     ft_strlen   (char *str);
void    *ft_memset  (void *s, int c, size_t n);
void    ft_bzero    (void *s, size_t n);
void    *ft_memcpy  (void *dest, const void *src, size_t n);
void    *ft_memmove (void *dest, const void *src, size_t n);




#endif