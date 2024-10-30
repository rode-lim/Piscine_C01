#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

// int	main(void)
// {
// 	int	i, a;
// 	i = 10;
// 	a = 20;

// 	printf("%d\n", i);
// 	printf("%d\n", a);

// 	ft_ultimate_div_mod(&i, &a);

// 	printf("Quotient: %d\n", i);
// 	printf("Remainder: %d\n", a);
// }
