/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:54:46 by rode-lim          #+#    #+#             */
/*   Updated: 2024/11/08 16:54:47 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
