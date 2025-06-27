/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:00:53 by benes-al          #+#    #+#             */
/*   Updated: 2025/05/06 13:12:28 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_print_args(format[++i], ap);
			i++;
		}
		if (format[i] && format[i] != '%')
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (count);
}

/* 
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	my_return;
	int	printf_return;
	int	*n;
	int	nbr;
	
	nbr = 42;
	n = &nbr;
	my_return = ft_printf("%d", 36789);
	printf("\n");
	printf_return = printf("%d", 36789);
	printf("\n");
	printf("my_return: %d\nprintf_return: %d\n", my_return, printf_return);
} */
