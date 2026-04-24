/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:48:46 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/24 20:29:26 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>

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
size_t  ft_strlen   (const char *str);
void    *ft_memset  (void *s, int c, size_t n);
void    ft_bzero    (void *s, size_t n);
void    *ft_memcpy  (void *dest, const void *src, size_t n);
void    *ft_memmove (void *dest, const void *src, size_t n);
size_t  ft_strlcpy  (char *dst, const char *src, size_t size);
size_t  ft_strlcat  (char *dst, const char *src, size_t dstsize);
int     ft_toupper  (int c);



#endif