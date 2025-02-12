/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:57:44 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/12 14:41:57 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRITF_H
# define LIBFTPRITF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <bsd/string.h>
# include "Libft/libft.h"

int	ft_printf(char const *str, ...);

// End of preprocessor directives / guards:
#endif // LIBFTPRITF_H