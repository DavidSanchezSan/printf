/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:04:57 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/14 14:57:13 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_int_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

void	ft_one_digit(int *count, int fd, int n)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
	(*count)++;
}

int	ft_putnbr_int_fd(int n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		count = 11;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count = 1;
	}
	if (n > 9)
	{
		count += ft_putnbr_int_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
		count++;
	}
	if (n >= 0 && n <= 9)
		ft_one_digit(&count, fd, n);
	return (count);
}
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