/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/12 12:15:21 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	total_length;
	size_t	n_len;

	if (!s)
		return (NULL);
	n_len = len;
	total_length = ft_strlen((char *)s);
	if (start >= total_length)
		n_len = 0;
	else if (len > total_length - start)
		n_len = total_length - start;
	s2 = (char *)malloc(n_len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < n_len)
	{
		s2[i] = s[i + start];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2;

// 	s2 = ft_substr(s1, 2, 4);
// 	printf("%s -> %s\n", s1, s2);

//     return (0);
// }
