#include <stdio.h>

	// Add a int * instead of void to test.
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	temp;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
	// return(tab); Add this after the while to test.

// int	main(void){
// 	int tab[] = {2, 3, 4, 1, 1};
// 	int	size = 5;
// 	int	*new;

// 	new = ft_sort_int_tab(tab, size);
	
// 	int	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\n", new[i]);
// 		i++;
// 	}
// }
