/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:12:27 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/12 14:41:54 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"


// Estudiar sobre: funciones variádicas, printf original, funciones útiles
// de la librería, búffer.
// Funciones autorizadas: malloc, free, write, va_start, va_arg, va_copy, va_end.
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
	int	i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return(i);
}
