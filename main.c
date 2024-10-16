#include "printf.h"

#include <stdio.h>

int	main(void)
{
	char *i = "a";
	ft_printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x", 42, 'c', "abcdef", &i, 2147483647);
	printf("\n");
	printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x", 42, 'c', "abcdef", &i, 2147483647);
}