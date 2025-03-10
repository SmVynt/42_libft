/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 22:46:49 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && i + j < len && haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {

// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "oW", 10),
// 	 strnstr("HelloWorld", "oW", 10));
// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "oW", 5),
// 	 strnstr("HelloWorld", "oW", 5));
// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "oWa", 10),
// 	 strnstr("HelloWorld", "oWa", 10));
// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "oW", 6),
// 	 strnstr("HelloWorld", "oW", 6));
// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "", 3),
// 	 strnstr("HelloWorld", "", 3));
// 	printf("%p vs %p\n", ft_strnstr("HelloWorld", "", 10),
// 	 strnstr("HelloWorld", "", 10));
// 	return (0);
// }
