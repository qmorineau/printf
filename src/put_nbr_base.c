/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:03:55 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/17 20:21:23 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	put_nbr_base_int(int nbr, char *base, int *count)
{
	int	base_len;
	int	tmp;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1, count);
		nbr *= -1;
		put_nbr_base_int(nbr, base, count);
	}
	else if (nbr < base_len)
		ft_putchar_fd(base[nbr], 1, count);
	else
	{
		tmp = nbr % base_len;
		put_nbr_base_int(nbr / base_len, base, count);
		ft_putchar_fd(base[tmp], 1, count);
	}
}

static void	put_nbr_base_u_int(unsigned int nbr, char *base, int *count)
{
	unsigned int	base_len;
	unsigned int	tmp;

	base_len = ft_strlen(base);
	if (nbr < base_len)
		ft_putchar_fd(base[nbr], 1, count);
	else
	{
		tmp = nbr % base_len;
		put_nbr_base_u_int(nbr / base_len, base, count);
		ft_putchar_fd(base[tmp], 1, count);
	}
}

static void	put_nbr_base_long(size_t nbr, char *base, int *count)
{
	size_t	base_len;
	size_t	tmp;

	base_len = ft_strlen(base);
	if (nbr < base_len)
		ft_putchar_fd(base[nbr], 1, count);
	else
	{
		tmp = nbr % base_len;
		put_nbr_base_long(nbr / base_len, base, count);
		ft_putchar_fd(base[tmp], 1, count);
	}
}

void	put_nbr_base(long long nbr, char *base, int *count, int type)
{
	if (type == INT)
		put_nbr_base_int((int) nbr, base, count);
	else if (type == U_INT)
		put_nbr_base_u_int((unsigned int) nbr, base, count);
	else if (type == LONG)
		put_nbr_base_long((size_t) nbr, base, count);
	else
		return ;
}
