/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesmourato <inesmourato@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:57:44 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/13 16:57:21 by inesmourato      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnum(long num, int base, char *symbols)
{
    int count;

    if(num < 0)
    {
        write(1, "-", 1);
        return(ft_printnum(-num, base, symbols) + 1);
    }
    else if(num < base)
    {
        return(ft_putchar_fd(symbols[num], 1));
    }
    else
    {
        count = ft_printnum(num / base, base, symbols);
        return(count + ft_printnum(num % base, base, symbols));
    }
}