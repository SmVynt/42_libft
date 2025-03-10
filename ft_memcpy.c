/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 17:12:17 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	unsigned char a[10];
// 	unsigned char b[10];
// 	int i;

// 	memset(a, 'A', 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		printf("%c ", a[i] );
// 		i++;
// 	}
// 	printf("\n");
// 	ft_memcpy(b, a, 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		printf("%c ", b[i] );
// 		i++;
// 	}
// 	printf("\n");
// }
