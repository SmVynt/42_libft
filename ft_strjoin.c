/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/12 12:12:51 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	if ((size_t)(-1) - len_s1 <= len_s2)
		return (NULL);
	s3 = (char *)malloc(len_s1 + len_s2 + 1);
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, len_s1);
	ft_memcpy(s3 + len_s1, s2, len_s2);
	s3[len_s1 + len_s2] = '\0';
	return (s3);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s1 = "Hello ";
// 	char *s2 = "World";
// 	char *s3;

// 	s3 = ft_strjoin(s1, s2);
// 	printf("%s & %s -> %s\n", s1, s2, s3);
// 	free(s3);
//     return (0);
// }
