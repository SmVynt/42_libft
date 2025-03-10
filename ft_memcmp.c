/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 22:10:38 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char *s1 = "Hello";
// 	char *s2 = "Hell0";
// 	char *s3 = "Hello1";
// 	char *s4 = "Hello2";
// 	char *s5 = "HeLlo";

// 	printf("%d vs %d\n", ft_memcmp(s1, s1, 10), memcmp(s1, s1, 10));
// 	printf("%d vs %d\n", ft_memcmp(s2, s1, 2), memcmp(s2, s1, 2));
// 	printf("%d vs %d\n", ft_memcmp(s3, s1, 6), memcmp(s3, s1, 6));
// 	printf("%d vs %d\n", ft_memcmp(s3, s4, 5), memcmp(s3, s4, 5));
// 	printf("%d vs %d\n", ft_memcmp(s5, s1, 6), memcmp(s5, s1, 6));
// 	return (0);
// }
