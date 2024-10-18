/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:03:55 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/18 20:24:16 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_nbr_base_int(long long nbr, char *base, int *count)
{
	long	base_len;
	long	tmp;

	base_len = ft_strlen(base);
	if (*count == -1)
		return ;
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1, count);
		nbr *= -1;
	}
	if (nbr < base_len)
	{
		ft_putchar_fd(base[nbr], 1, count);
	}
	else
	{
		tmp = nbr % base_len;
		put_nbr_base_int(nbr / base_len, base, count);
		if (*count == -1)
			return ;
		ft_putchar_fd(base[tmp], 1, count);
	}
}

static void	put_nbr_base_long(size_t nbr, char *base, int *count)
{
	size_t	base_len;
	size_t	tmp;

	base_len = ft_strlen(base);
	if (*count == -1)
		return ;
	if (nbr < base_len)
		ft_putchar_fd(base[nbr], 1, count);
	else
	{
		tmp = nbr % base_len;
		put_nbr_base_long(nbr / base_len, base, count);
		if (*count == -1)
			return ;
		ft_putchar_fd(base[tmp], 1, count);
	}
}

void	put_nbr_base(long long nbr, char *base, int *count, int type)
{
	if (type == INT)
		put_nbr_base_int((int) nbr, base, count);
	else if (type == U_INT)
		put_nbr_base_long((unsigned int) nbr, base, count);
	else if (type == LONG)
		put_nbr_base_long((size_t) nbr, base, count);
	else
		return ;
}
