/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabeid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:37:47 by aabeid            #+#    #+#             */
/*   Updated: 2021/11/18 20:23:59 by aabeid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char)str[i] == (char)c)
			return ((char *) &str[i]);
		i--;
	}
	return (0);
}

/*int main()
{
	const char *s = "String\0test\0number\0\0";
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", strrchr(s, '\0'));
	return 0;
}*/