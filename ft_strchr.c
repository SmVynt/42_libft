/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 21:34:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char *s = "HelloWorld";

// 	printf("%p vs %p\n", ft_strchr(s, 'H'), strchr(s, 'H'));
// 	printf("%p vs %p\n", ft_strchr(s, 'o'), strchr(s, 'o'));
// 	printf("%p vs %p\n", ft_strchr(s, 'd'), strchr(s, 'd'));
// 	printf("%p vs %p\n", ft_strchr(s, '\0'), strchr(s, '\0'));
// 	printf("%p vs %p\n", ft_strchr(s, 'p'), strchr(s, 'p'));
// 	return (0);
// }
