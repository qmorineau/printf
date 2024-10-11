/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:38:53 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/09 10:38:53 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = 0;
	while (little[little_len])
		little_len++;
	if (little_len == 0)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && len > i + j)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>

int main (void)
{
	const char *largestring = "abcdef";
	const char *smallstring = "abcdefghijklmno";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 6);
	if (ptr != NULL) {
		printf("%s\n", ptr);
	} else {
		printf("null\n");
	}
} */