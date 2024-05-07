/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesmourato <inesmourato@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:51:25 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/06 17:59:26 by inesmourato      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_arguments(const char *s, int i, va_list args)
{
    if(s[i + 1] == 'c')
        return(ft_putchar_fd(va_arg(args, int), 1));
    /*else if(s[i + 1] == 's')
        return(ft_putstr_fd(va_arg(args, char *), 1));
    else if(s[i + 1] == 'p')*/
        
}


int ft_printf(const char *str, ...)
{
    va_list args;
    int ret;
    int i;

    i = 0;
    ret = 0;
    va_start(args, str);
    while(str[i])
    {
        if(str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
           {
                ret = ret + ft_arguments(string, i, args);
                i++;
           }
        else
            ret = ret + ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return(ret);
}

int main()
{
    ft_printf("ola, tudo %c", 'd');
}