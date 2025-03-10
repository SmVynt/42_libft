/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 18:52:19 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (((char *)dst > (char *)src) && ((char *)dst < (char *)src + len))
	{
		i = len - 1;
		while (i > 0)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i--;
		}
		((char *) dst)[0] = ((char *) src)[0];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
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
// 	ft_memmove(b, a, 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		printf("%c ", b[i] );
// 		i++;
// 	}
// 	printf("\n");
// }
