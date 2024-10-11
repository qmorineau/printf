#include "printf.h"

#include <stdio.h>

int	main(void)
{
	char a[] = "123";

	ft_printf("abcdefg%s0123456%s789", "", "");
	printf("%s", a);
}