/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:44 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) s)[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	unsigned char a[10];
// 	int i;

// 	memset(a, 'A', 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		//printf("%c ", a[i] );
// 		printf("a[%d] = %d (char: %c)\n", i, a[i], a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_bzero(a, 10);
// 	i = 0;
// 	while (i<10)
// 	{
// 		//printf("%c ", a[i] );
// 		printf("a[%d] = %d (char: %c)\n", i, a[i], a[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
