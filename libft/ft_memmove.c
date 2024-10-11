/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:37:05 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/10 12:35:53 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_normal(unsigned char *ptr_dest, unsigned char *ptr_src,
	size_t n)
{
	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
}

static void	ft_memmove_reverse(unsigned char *ptr_dest, unsigned char *ptr_src,
	size_t n)
{
	ptr_dest += n - 1;
	ptr_src += n - 1;
	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest--;
		ptr_src--;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;

	if ((!dest && !src) || n == 0)
		return (dest);
	ptr_src = (unsigned const char *) src;
	ptr_dest = (unsigned char *) dest;
	if (ptr_dest < ptr_src || ptr_dest >= ptr_src + n)
	{
		ft_memmove_normal(ptr_dest, (unsigned char *) ptr_src, n);
	}
	else
	{
		ft_memmove_reverse(ptr_dest, (unsigned char *) ptr_src, n);
	}
	return (dest);
}
