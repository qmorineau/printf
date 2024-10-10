/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:44:25 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/10 16:56:34 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *a, ...)
{
	va_list	arguments;
	int		i;

	i = 0;
	va_start(arguments, a);
	while (i < 3)
	{
		va_arg(arguments, i);
	}
	va_end(arguments);
}

int main(void)
{
	ft_printf("test", "test1", "test2", "test3");
}

// va_start(va_list ap, parmN)
// ap = variable that will be initialize by va_start, use to traverse the list of arg
// parmN = It is name of the last named parameter in the function definition.