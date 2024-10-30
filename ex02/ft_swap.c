#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	i = 10;
// 	int	d = 20;
// 	printf("%i\n", i);
// 	printf("%i\n", d);
// 	printf("Changed values:\n");
// 	int	*l = &i;
// 	int *b = &d;
// 	ft_swap(l, b);
// 	printf("%i\n", i);
// 	printf("%i\n", d);
// }