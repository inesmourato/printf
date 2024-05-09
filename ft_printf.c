/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:51:25 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/09 11:16:48 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arguments(const char *s, int i, va_list ap)
{
	if (s[i + 1] == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	else if (s[i + 1] == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (s[i + 1] == 'i' || s[i + 1] == 'd' || s[i + 1] == 'x' || s[i + 1] == 'X' )
		return (ft_putdigit(va_arg(ap, int), base)) 
        else return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		ret;
	int		i;

	i = 0;
	ret = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			ret = ret + ft_arguments(str, i, ap);
			i++;
		}
		else
			ret = ret + ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(ap);
	return (ret);
}

int	main(void)
{
	ft_printf("Prints a single character: %c\n", 'a');
	ft_printf("Prints a string: %s\n", "ola");
}