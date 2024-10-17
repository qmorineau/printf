/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:43:43 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/17 20:18:36 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

# define HEXA_LOW "0123456789abcdef"
# define HEXA_UPP "0123456789ABCDEF"
# define BASE_TEN "0123456789"
# define INT 0
# define U_INT 1
# define LONG 2

int		ft_printf(const char *string, ...);
void	put_nbr_base(long long nbr, char *base, int *count, int type);
int		ft_strlen(char *s);
void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);
void	print_from_flags(va_list args, int *count, char c);
#endif