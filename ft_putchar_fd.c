/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:03:56 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/07 10:53:08 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	return(write(fd, &c, 1));
}

/*int main(void)
{
   ft_putchar_fd('H', 1);
   ft_putchar_fd('8', 1);
   ft_putchar_fd('\n', 1);
}*/