/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 18:52:18 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while ((i < size - len_dst - 1) && src[i])
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_src + len_dst);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char dest[10];

//     printf("R: %zu | Dest: %s\n", strlcat(dest, "Hello", 6), dest);
//     printf("R: %zu | Dest: %s\n", ft_strlcat(dest, "Hello123", 3), dest);
//     printf("R: %zu\n", ft_strlcat(dest, "Hello", 0));

//     return 0;
// }
