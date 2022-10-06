/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:38:59 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/18 20:23:20 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	n_len;
	size_t	i;

	i = 0;
	n_len = ft_strlen((char *) needle);
	if (*needle == 0)
		return ((char *) haystack);
	n_len = ft_strlen((char *) needle);
	while (i <= (n - n_len) && ft_strlen(needle) <= ft_strlen(haystack)
		&& n > 0)
	{
		if ((haystack[i] == needle[0])
			&& (0 == ft_strncmp(&haystack[i], needle, n_len)))
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
