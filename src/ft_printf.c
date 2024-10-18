/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:44:25 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/18 09:34:31 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Bonus

// manage # 'space' and + flag between % and the char
// + flag = put the sign before any number
// space flag = a blank shoud be left before a positive number
// # flag = 
//manage -O. flag
// - flags = The converted value is to be left adjusted on the field boundary.
//  (The default is right justification.)  The converted value is padded on the right with blanks, rather
  //            than on the left with blanks or zeros.  A - overrides a 0
    //          if both are given.
// 0 flags =

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
	}
	va_end(args);
	return (count);
}
