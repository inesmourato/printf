/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:51:25 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/15 13:25:13 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arguments(char s, va_list ap)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += (ft_putchar(va_arg(ap, int)));
	else if (s == 's')
		count += (ft_putstr(va_arg(ap, char *)));
	else if (s == 'p')
		count += (ft_pointer(va_arg(ap, unsigned long), "123456789abcdef",
				0));
	else if (s == 'i' || s == 'd')
		count += (ft_printnum(va_arg(ap, int), 10, "0123456789"));
	else if (s == 'u')
		count += (ft_printnum(va_arg(ap, unsigned int), 10, "0123456789"));
	else if (s == 'x')
		count += (ft_printnum(va_arg(ap, unsigned int), 16,
					"0123456789abcdef"));
	else if (s == 'X')
		count += (ft_printnum(va_arg(ap, unsigned int), 16,
					"0123456789ABCDEF"));
	else if (s == '%')
		count += (ft_putchar('%'));
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
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = count + ft_arguments(str[i + 1], ap);
			i++;
		}
		else
			count = count + ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	ft_printf("Prints a single character: %c\n", 'a');
// 	ft_printf("Prints a string: %s\n", "ola");
// 	ft_printf("Prints a decimal: %d\n", 21);
// 	ft_printf("Prints an integer base 10: %i\n", 2147483647);
// 	ft_printf("Prints an unsigned decimal (base 10) number: %u\n", 4294967295);
// 	ft_printf("Prints a number in hexadecimal (base 16) lowercase format: %x\n",
// 		7843);
// 	ft_printf("Prints a number in hexadecimal (base 16) uppercase format: %X\n",
// 		7843);
// 	ft_printf("Prints a percent sign: %%\n", 1);
// 	// ft_printf("Prints all together: %c %s %d %i %u %x %X %%\n",'a', "ola",
// 		21, 2147483647, 4294967295, 7843, 7843, 1);

// 	printf("Prints a single character: %c\n", 'a');
// 	printf("Prints a string: %s\n", "ola");
// 	printf("Prints a decimal: %d\n", 21);
// 	printf("Prints an integer base 10: %i\n", 2147483647);
// 	printf("Prints an unsigned decimal (base 10) number: %u\n", 4294967295);
// 	printf("Prints a number in hexadecimal (base 16) lowercase format: %x\n",
// 		7843);
// 	printf("Prints a number in hexadecimal (base 16) uppercase format: %X\n",
// 		7843);
// 	printf("Prints a percent sign: %%\n", 1);
// 	// printf("Prints all together: %c %s %d %i %u %x %X %%\n",'a', "ola", 21,
// 		2147483647, 4294967295, 7843, 7843, 1);
// }

/* int main()
{
		char *s2 = "Mussum Ipsum,
			cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis,
			per gatis num morreus.";
		ft_printf("%d",ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
		printf("\n");
		printf("%d", printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
} */

// int	main(void)
// {
// 	int x = 56;
// 	void *ptr = &x;

//         ft_printf("%p", ptr);
// }