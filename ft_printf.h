/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:52:42 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/15 14:22:19 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>


int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printnum(long num, int base, char *symbols);
int	ft_printf(const char *str, ...);
int	ft_pointer(unsigned long long ptr, char *base, int f);

#endif