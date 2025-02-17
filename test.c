
#include "ft_printf.h"

int	main(void)
{
	// char c = 'H';
	// char *str = "Hola";
	unsigned int num1 = -1000000;
	// int num2 = 0x2A;
	// int num3 = 052;
	// char *ptr = "World";
	printf("%d\n", ft_printf("Adios %u mundo", num1));
	printf("%d\n", printf("Adios %u mundo", num1));
	// printf("%d\n",printf("%s", str));
	return (0);
}