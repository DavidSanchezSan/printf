
#include "ft_printf.h"

int	main(void)
{
	int num;
	//char c = 'H';
	char *str = "Hola";
	//printf("%d\n",ft_putstr_int_fd(str, 1));
	printf("%d\n",ft_printf("%s", str));
	printf("%d\n",printf("%s", str));
	//ft_printf("%d\n",ft_printf("%c", c));
	return(0);
}