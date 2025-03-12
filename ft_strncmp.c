/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/12 12:09:26 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {

// 	printf("%d vs %d\n", ft_strncmp("Hello", "Hello", 7),
// strncmp("Hello", "Hello", 7));
// 	printf("%d vs %d\n", ft_strncmp("Hell0", "Hello", 2),
// strncmp("Hell0", "Hello", 2));
// 	printf("%d vs %d\n", ft_strncmp("Hello1", "Hello", 6),
// strncmp("Hello1", "Hello", 6));
// 	printf("%d vs %d\n", ft_strncmp("Hello1", "Hello2", 5),
// strncmp("Hello1", "Hello2", 5));
// 	printf("%d vs %d\n", ft_strncmp("test\200", "test\0", 6),
// strncmp("test\200", "test\0", 6));
// 	return (0);
// }
