/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:37:08 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/09 10:37:08 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		value = (unsigned char) c;
		*ptr = value;
		ptr++;
		n--;
	}
	return (s);
}

/* #include <stdio.h>

int main(void)
{
    char *s = "abcdefg";
    char c = 90;
    ft_memset(s, 'A', 3);
    printf("%s\n", s);
} */