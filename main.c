#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char i[] = "b";
	ft_printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x num-hexa %X\n", 42, 'c', "abcdef", &i, 2147483647, -2147483647);
	printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x num-hexa %X", 42, 'c', "abcdef", &i, 2147483647, -2147483647);
	/* printf("%c%c%c%c%c%c%c\n", 0, -35, 90, 32, 95, 121, 126);
	ft_printf("%c%c%c%c%c%c%c\n", 0, -35, 90, 32, 95, 121, 126); */
	/* printf("%d", printf("%s%s%s\n", NULL, "", "abc")); */
	/* ft_printf("%s%s%s\n", NULL, "", "abc"); */
	/* printf("%p\n", i); */
	/* ft_printf("%s\n", i); */
	/* printf("%d = printf\n", printf("%u, %d\n", (unsigned int) 4294967286, -10));
	ft_printf("%d = ft\n", ft_printf("%u, %d\n", (unsigned int) 4294967286, -10)); */
}