/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:36:30 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/19 13:25:59 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	old_dest;
	size_t	i;
	size_t	dest_len;

	i = 0;
	if (destsize == 0 && dest == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	old_dest = dest_len;
	if (destsize > dest_len)
	{
		while (*(src + i) != '\0' && (dest_len < destsize - 1))
		{
			*(dest + dest_len) = *(src + i);
			dest_len++;
			i++;
		}
		*(dest + dest_len) = '\0';
		return (ft_strlen(src) + old_dest);
	}
	else
		return (destsize + ft_strlen(src));
}
