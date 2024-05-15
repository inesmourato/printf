/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:32:34 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/15 14:38:27 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printnum(long num, int base, char *symbols);
int	ft_printf(const char *str, ...);
int	ft_pointer(unsigned long long ptr, char *base, int f);

#endif