/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:54:50 by rode-lim          #+#    #+#             */
/*   Updated: 2024/11/08 16:54:51 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
