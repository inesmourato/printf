/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesmourato <inesmourato@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:51:25 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/13 17:09:30 by inesmourato      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arguments(char s, va_list ap)
{
    int count;
    
    count = 0;
	if (s == 'c')
		count += (ft_putchar_fd(va_arg(ap, int), 1));
	else if (s == 's')
		count += (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (s == 'i' || s == 'd')
		count += (ft_printnum(va_arg(ap, int), 10, "0123456789"));
    else if(s == 'u')
        count += (ft_printnum(va_arg(ap, unsigned int), 10, "0123456789"));
    return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = count + ft_arguments(str[i + 1], ap);
			i++;
		}
		else
			count = count + ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	ft_printf("Prints a single character: %c\n", 'a');
	ft_printf("Prints a string: %s\n", "ola");
    ft_printf("Prints a decimal: %d\n", 21);
    ft_printf("Prints an integer base 10: %i\n", 321);
    ft_printf("Prints an unsigned decimal (base 10) number: %i\n", 123243);
}