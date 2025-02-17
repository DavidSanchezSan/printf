/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:12:27 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/17 14:01:12 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Estudiar sobre: funciones variádicas, printf original, funciones útiles
// de la librería, búffer.
// Funciones autorizadas: malloc, free, write, va_start, va_arg, va_copy,
// va_end.
// Se permite el uso de libft
// Objetivo: Escribir una librería que contenga la función ft_printf() que
// imite a la original.
// Archivos: Makefile, *.h, */*.h *.c, */*.c
// Makefile: NAME, all, clean, fclean, re
// Nombre del programa: libftprintf.a

// No implementar la gestión del búffer del printf() original
// Implementar las siguientes conversiones: cspdiuxX%
// Comparar con la función original
// Usar ar, no libtool
// El archivo libftprintf.a creado en la raíz del repositorio
// Implementar las siguientes conversiones:
// - %c imprime un solo caracter
// - %s imprime una string
// - %p el puntero void * dado como argumento se imprime en formato hexadecimal
// - %d imprime un numero decimal (en base diez)
// - %i imprime un entero en base 10
// - %u imprime un numero decimal (base 10) sin signo
// - %x imprime un numero hexadecimal (base 16) en minusculas
// - %X imprime un numero hexadecimal (base 16) en mayusculas
// - %% para imprimir el simbolo del porcentaje
// Bonus:
// - Gestiona cualquier combinación de los siguientes flags: '-0.' y el ancho
// mínimo (field minimum width) bajo todas las conversiones posibles.
// - Gestiona todos los siguientes flags: '# +'(sí, uno de ellos es un espacio)

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				count += ft_putchar_int_fd((va_arg(args, int)), 1);
				i++;
			}
			if (str[i] == 's')
			{
				count += ft_putstr_int_fd((va_arg(args, char *)), 1);
				i++;
			}
			// else if (str[i] == 'p')
			// {
				
			// }
			else if (str[i] == 'd')
			{
				count += ft_putnbr_int_fd((va_arg(args, int)), 1);
				i++;
			}
			else if (str[i] == 'i')
			{
				count += ft_putnbr_int_fd((va_arg(args, int)), 1);
				i++;
			}
			// else if (str[i] == 'u')
			// {
			// }
			// else if (str[i] == 'x')
			// {
			// }
			// else if (str[i] == 'X')
			// {
			// }
			else if (str[i] == '%')
			{
				count += ft_putchar_int_fd('%', 1);
				i++;
			}
		}
		else
		{
			count += ft_putchar_int_fd(str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (count);
}
