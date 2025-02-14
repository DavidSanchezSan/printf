/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:57:44 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/14 14:57:17 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRITF_H
# define LIBFTPRITF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <bsd/string.h>

int	ft_printf(char const *str, ...);
int	ft_putchar_int_fd(char c, int fd);
void	ft_one_digit(int *count, int fd, int n);
int	ft_putnbr_int_fd(int n, int fd);
int	ft_putstr_int_fd(char *s, int fd);

// End of preprocessor directives / guards:
#endif // LIBFTPRITF_H