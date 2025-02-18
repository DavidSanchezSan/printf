/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:42:24 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/18 14:45:52 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function that prints a string character by character
int	ft_putstr_int_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
	return (count);
}

// Function that prints a number as hexadecimal in lower characters
int	ft_hex_low_fd(unsigned long long n, int fd)
{
	char	*c;
	int		count;

	c = "0123456789abcdef";
	count = 0;
	if (n > 15)
	{
		count += ft_hex_low_fd(n / 16, fd);
		write(fd, &c[n % 16], 1);
		count++;
	}
	else
	{
		write(fd, &c[n], 1);
		count += 1;
	}
	return (count);
}

// Function that prints a number as hexadecimal in upper characters
int	ft_hex_upp_fd(unsigned long long n, int fd)
{
	char	*c;
	int		count;

	c = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
	{
		count += ft_hex_upp_fd(n / 16, fd);
		write(fd, &c[n % 16], 1);
		count++;
	}
	else
	{
		write(fd, &c[n], 1);
		count += 1;
	}
	return (count);
}

// Function that prints a memory position as hexadecimal characters
int	ft_ptr_fd(void *ptr, int fd)
{
	int	count;

	count = 0;
	write(fd, "0x", 2);
	count += 2;
	count += ft_hex_low_fd((unsigned long long)ptr, fd);
	return (count);
}
