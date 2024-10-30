#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main() {
// 	int a = 11;
// 	int b = 13;
// 	int div, mod;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("Quotient: %d\n", div);
// 	printf("Remainder: %d\n", mod);

// 	return 0;
// }
