#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

// int	main(void)
// {
// 	char str[13] = "Hello world!\n";
// 	int	len = 0;
// 	len = ft_strlen(str);
// 	printf("%d\n", len);
// }
