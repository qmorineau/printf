/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_from_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:27:02 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/18 20:24:19 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_from_flags(va_list args, int *count, char c)
{
	if (c == 'd' || c == 'i')
		put_nbr_base(va_arg(args, long), BASE_TEN, count, INT);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1, count);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (c == '%')
		ft_putchar_fd('%', 1, count);
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1, count);
		put_nbr_base(va_arg(args, size_t), HEXA_LOW, count, LONG);
	}
	else if (c == 'x')
		put_nbr_base(va_arg(args, int), HEXA_LOW, count, U_INT);
	else if (c == 'X')
		put_nbr_base(va_arg(args, int), HEXA_UPP, count, U_INT);
	else if (c == 'u')
		put_nbr_base(va_arg(args, unsigned int), BASE_TEN, count, U_INT);
	else
		ft_putchar_fd('%', 1, count);
}
