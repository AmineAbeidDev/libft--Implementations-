/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:21:22 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/18 16:32:53 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	char			*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if ((s == 0 && d == 0) || n == 0)
		return (dest);
	if (src > dest)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (++i <= n)
			d[n - i] = s[n - i];
	}
	return (dest);
}

/*int main(){
	char str[20] = "Test String";
	printf("%s\n", ft_memmove(str, str + 3, 5));
	printf("%s\n", ft_memcpy(str, str + 3, 5));
	return (0);
}*/