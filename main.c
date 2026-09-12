#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("isalpha A: %d\n", ft_isalpha('A'));
	printf("isdigit 5: %d\n", ft_isdigit('5'));
	printf("isalnum A: %d\n", ft_isalnum('A'));
	printf("isascii 127: %d\n", ft_isascii(127));
	printf("isprint A: %d\n", ft_isprint('A'));
	printf("strlen Hello: %zu\n", ft_strlen("Hello"));
	return (0);
}
