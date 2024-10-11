/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:38:55 by qmorinea          #+#    #+#             */
/*   Updated: 2024/10/09 10:38:55 by qmorinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
		{
			p = (char *) &s[i];
		}
		i++;
	}
	if ((unsigned char) c == s[i])
		p = (char *) &s[i];
	return (p);
}
