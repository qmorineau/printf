/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:44:25 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/18 20:30:55 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] != '%')
			ft_putchar_fd(string[i++], 1, &count);
		else
		{
			i++;
			print_from_flags(args, &count, string[i]);
			i++;
		}
		if (count == -1)
			return (-1);
	}
	va_end(args);
	return (count);
}
