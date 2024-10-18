#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *s = NULL;
	/* ft_printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x num-hexa %X\n", 42, '0', "abcdef", &i, 2147483647, -2147483647);
	printf("dec: %d char: %c percent: %% string: %s p-hexa %p num-hexa %x num-hexa %X", 42, '0', "abcdef", &i, 2147483647, -2147483647); */n

	// flag c
	printf("\n\033[0;31mChar\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%c%c%c%c%c%c%c\n", 0, -35, 90, 32, 95, 121, 126));
	printf("pf = %d\n",printf("%c%c%c%c%c%c%c\n", 0, -35, 90, 32, 95, 121, 126));

	// flag p
	printf("\n\033[0;31mPointer\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%p", NULL));
	printf("pf = %d\n", printf("%p", NULL));
	ft_printf("ft = %d\n", ft_printf("%p", 0));
	printf("pf = %d\n", printf("%p", NULL));

	// flag d
	printf("\n\033[0;31mInt D\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%d", -150));
	printf("pf = %d\n", printf("%d", -150));
	ft_printf("ft = %d\n", ft_printf("%d", 2147483647));
	printf("pf = %d\n", printf("%d", 2147483647));

	// flag i
	printf("\n\033[0;31mInt I\033[0m\n");

	// flag u
	printf("\n\033[0;31mUnsigned Int U\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%u", (unsigned int) 4294967286));
	printf("pf = %d\n", printf("%u", (unsigned int) 4294967286));

	// flag s
	printf("\n\033[0;31mString\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%s", ""));
	printf("pf = %d\n", printf("%s", ""));
	ft_printf("ft = %d\n", ft_printf("%s", s));
	printf("pf = %d\n", printf("%s", s));
	
	// flag x
	printf("\n\033[0;31mInt Hexa low\033[0m\n");

	// flag X
	printf("\n\033[0;31mInt Hexa upp\033[0m\n");

	// flag %
	printf("\n\033[0;31mPercent\033[0m\n");
	ft_printf("ft = %d\n", ft_printf("%% %% %% %% %% %% %% %% %%%% %%"));
	printf("pf = %d\n", printf("%% %% %% %% %% %% %% %% %%%% %%"));
}