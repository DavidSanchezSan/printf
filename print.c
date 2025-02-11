#include <stdarg.h>
#include <stdio.h>

// int	main(void)
// {
// 	printf("%+d", -50);
// 	return(0);
// }

// int	add(int args, ...)
// {
// 	va_list	list;
// 	int		i;
// 	int		sum;

// 	i = 0;
// 	sum = 0;
// 	if (args == 0)
// 		return (0);
// 	va_start(list, args);
// 	while (i < args)
// 	{
// 		sum += va_arg(list, int);
// 		i++;
// 	}
// 	va_end(list);
// 	return (sum);
// }

// int	main(void)
// {
// 	printf("Suma 1: %d\n", add(5, 1, 1, 1, 1, 1));
// 	printf("Suma 2: %d\n", add(2, 50, 25));
// 	printf("Suma 3: %d\n", add(3, -1, -1, 1));
// 	printf("Suma 4: %d\n", add(1, 5));
// 	printf("Suma 5: %d\n", add(0));
// 	printf("Suma 6: %d\n", add(1));
// 	printf("Suma 7: %d\n", add(1, 2, 3));
// 	printf("Suma 8: %d\n", add(0, 1));
// 	printf("Suma 9: %d\n", add(-1, 5));
// 	return (0);
// }

int add(int num_args, ...)
{
    va_list args;
    va_start(args, num_args);
    int total;
	int	i;

	total = 0;
	i = 0;
    while (i < num_args)
	{
        total += va_arg(args, int);
		i++;
    }
    va_end(args);
    return (total);
}

int front_add(int num_args, ...)
{
    va_list args;
    va_start(args, num_args);
    int total = add(num_args, args);
    va_end(args);
    return (total);
}

int main(int argc, char* argv[])
{
    int total = front_add(5, 2, 1, 1, 1, 1);
    printf ("total = %d\n", total);
    return (0);
}