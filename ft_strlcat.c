/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 20:17:41 by psmolin          ###   ########.fr       */
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
// 	char dest1[15] = "Hello";
// 	char dest2[5] = "Hi";
// 	char dest3[3] = "A";
// 	char dest4[1] = "";
// 	char dest5[10] = "1234"; // `dstsize` = `strlen(dst) + 1`

// printf("Re: %zu | Dest: %s\n", ft_strlcat(dest1,
// " World!", sizeof(dest1)), dest1);
// printf("Re: %zu | Dest: %s\n", ft_strlcat(dest2,
// "Test", sizeof(dest2)), dest2);
// printf("Re: %zu | Dest: %s\n", ft_strlcat(dest3,
// "LongString", sizeof(dest3)), dest3);
// printf("Re: %zu\n", ft_strlcat(dest4, "Hello",
// sizeof(dest4))); // Should return len_src
// printf("Re: %zu | Dest: %s\n", ft_strlcat(dest5,
// "56789", sizeof(dest5)), dest5);

//     return (0);
// }
