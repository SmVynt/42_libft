/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 22:01:37 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char *s = "HelloWorld";

// 	printf("%p vs %p\n", ft_memchr(s, 'H', 10), memchr(s, 'H', 10));
// 	printf("%p vs %p\n", ft_memchr(s, 'o', 10), memchr(s, 'o', 10));
// 	printf("%p vs %p\n", ft_memchr(s, 'd', 10), memchr(s, 'd', 10));
// 	printf("%p vs %p\n", ft_memchr(s, '\0', 11), memchr(s, '\0', 11));
// 	printf("%p vs %p\n", ft_memchr(s, 'p', 10), memchr(s, 'p', 10));
// 	return (0);
// }
