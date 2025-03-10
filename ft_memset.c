/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:56:25 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *) b)[i] = (char) c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	unsigned char a[10];
// 	int i;

// 	ft_memset(a, 'A', 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		//printf("%c ", a[i] );
// 		printf("a[%d] = %d (char: %c)\n", i, a[i], a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_memset(a, 'B', 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		//printf("%c ", a[i] );
// 		printf("a[%d] = %d (char: %c)\n", i, a[i], a[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
