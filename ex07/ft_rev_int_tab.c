/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:55:02 by rode-lim          #+#    #+#             */
/*   Updated: 2024/11/08 16:56:57 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

	// Add a int * instead of void to test.
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
	// return(tab); Add this after the while to test.

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
// 	int	size = 5;
// 	int	*new_tab;

// 	new_tab = ft_rev_int_tab(tab, size);

// 	int	i = 0;
// 	while(i < 5)
// 	{
// 		printf("%d", new_tab[i]);
// 		i++;
// 	}
// }
