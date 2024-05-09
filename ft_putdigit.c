/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:20:02 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/09 11:21:51 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putdigit(long n, int base)
{
	int count;
        char *up_symbols;
        char *low_symbols;

        count = 0;
        low_symbols = "0123456789abcdef";
        up_symbols = "0123456789ABCDEF";
        if(n < 0)
        {
                write(1, '-', 1);
                return(ft_putdigit(-n, base) + 1);
        }
        else if(n < base)
                return(ft_putchar_fd())
}

/*int main (void)
{
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
}*/