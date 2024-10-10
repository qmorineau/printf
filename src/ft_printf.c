/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:44:25 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/10 18:18:36 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


#include <stdio.h>
#include <stdarg.h>



int ft_count_args(va_arg)
{
	int i;
	
	i = 0;
	return (i)
}

int	ft_printf(const char *a, ...)
{
	va_list	count_arg;
	va_list args;
	int		i;

	i = 0;
	va_start(args, a);
	va_copy(count_arg, args);
	i = ft_count_args(count_arg);
	printf("1st param = '%s'\n", a);
	while (va_arg(args, char *))
	{
		printf("%s\n", args);
		i++;
	}
	va_end(args);
	return (1);
}

int main(void)
{
	ft_printf("a", "b", "c", "d");
}

// va_start(va_list ap, parmN)
// ap = variable that will be initialize by va_start, use to traverse the list of arg
// parmN = It is name of the last named parameter in the function definition.
// va_arg(va_list ap, type)
// type = type of variable
// va_end