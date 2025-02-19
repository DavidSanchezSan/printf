/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:12:27 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/19 15:58:59 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_cases(char const *str, va_list args, int count, int *i)
{
	if (str[*i] == '%')
	{
		(*i)++;
		if (str[*i] == 'c')
			count += ft_putchar_int_fd((va_arg(args, int)), 1);
		else if (str[*i] == 's')
			count += ft_putstr_int_fd((va_arg(args, char *)), 1);
		else if (str[*i] == 'p')
			count += ft_ptr_fd((va_arg(args, void *)), 1);
		else if (str[*i] == 'd')
			count += ft_putnbr_int_fd((va_arg(args, int)), 1);
		else if (str[*i] == 'i')
			count += ft_putnbr_int_fd((va_arg(args, int)), 1);
		else if (str[*i] == 'u')
			count += ft_putnbr_unint_fd((va_arg(args, unsigned int)), 1);
		else if (str[*i] == 'x')
			count += ft_hex_low_fd((va_arg(args, unsigned long long)), 1);
		else if (str[*i] == 'X')
			count += ft_hex_upp_fd((va_arg(args, unsigned long long)), 1);
		else if (str[*i] == '%')
			count += ft_putchar_int_fd('%', 1);
	}
	else
		count += ft_putchar_int_fd(str[*i], 1);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		count = ft_print_cases(str, args, count, &i);
		i++;
	}
	va_end(args);
	return (count);
}
