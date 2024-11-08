/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:54:43 by rode-lim          #+#    #+#             */
/*   Updated: 2024/11/08 16:57:30 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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