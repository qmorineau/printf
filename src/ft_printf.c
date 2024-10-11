/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:44:25 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/11 19:29:24 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
# include "../libft/libft.h"



#include <stdio.h>
#include <stdarg.h>
//Logic:

//parse number of argument
//parse number of %
//print until %
//print variable
//continue until \0 ?

//Func

//convertbase
//print hexadecimal
//putnbr
//putnbr decimal
//putbnr unsigned decimal
//tower hexa
//toupper hexa
//check format 'cspdiuxX%', if not char after % don"t print %

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


int ft_count_args(va_list args)
{
	int i;
	
	i = 0;
	while (va_arg(args, char*) != NULL)
		i++;
	printf("nbr of args = %d\n", i);
	return (i);
}

/* void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
} */

int	ft_is_valid_flag(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' 
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_printf(const char *string, ...)
{
	va_list	count_arg;
	va_list args;
	int		i;
	/* int		arg_len; */

	i = 0;
	printf("\nstring = %s\n", string);
	va_start(args, string);
	va_copy(count_arg, args);
	while (string[i])
	{
		if (string[i] != '%')
		{
			ft_putchar_fd(string[i], 1);
			i++;
		}
		else if (ft_is_valid_flag(string[++i]))
		{
			printf("\nprint variable\n");
			i++;
		}
		else
		{
			ft_putchar_fd('%', 1);
		}
	}
	/* arg_len = ft_count_args(count_arg); */
	/* while (i < arg_len)
	{
		printf("i = %d, string = %s\n", i, va_arg(args, char*));
		i++;
	} */
	printf("\nstring = %s\n", "coucou");
	va_end(args);
	return (1);
}

// va_start(va_list ap, parmN)
// ap = variable that will be initialize by va_start, use to traverse the list of arg
// parmN = It is name of the last named parameter in the function definition.
// va_arg(va_list ap, type)
// type = type of variable
// va_end