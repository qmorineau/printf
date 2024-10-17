/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:46:58 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/17 20:21:26 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	write(fd, &c, 1);
	count++;
}

void	ft_putstr_fd(char *s, int fd, int *count)
{
	size_t	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd, count);
}
