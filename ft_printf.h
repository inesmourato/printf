/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesmourato <inesmourato@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:52:42 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/13 17:10:51 by inesmourato      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	ft_putchar_fd(char c, int fd);
char	ft_putstr_fd(char *s, int fd);
int ft_printnum(long num, int base, char *symbols);

#endif