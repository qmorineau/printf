/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:46:58 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/18 20:33:26 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd, int *count)
{
	int	i;

	i = write(fd, &c, 1);
	if (i < 0 || (*count) == -1)
		(*count) = -1;
	else
		(*count)++;
}

void	ft_putstr_fd(char *s, int fd, int *count)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1, count);
		return ;
	}
	while (s[i])
	{
		ft_putchar_fd(s[i++], fd, count);
		if (*count == -1)
			return ;
	}
}
