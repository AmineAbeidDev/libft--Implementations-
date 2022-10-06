/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:06:37 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/15 19:39:09 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	l;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (l <= (size_t)start)
	{
		p = ft_calloc(1, 1);
		return (p);
	}
	if (l > len)
		l = len;
	p = malloc(l + 1);
	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = s[(size_t)start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
