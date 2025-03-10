/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:55:08 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char s1[] = "hello";
// 	char s2[] = "";
// 	char s3[] = "hello\n 535";

// 	printf("%lu %lu\n", ft_strlen(s1), strlen(s1) );
// 	printf("%lu %lu\n", ft_strlen(s2), strlen(s2) );
// 	printf("%lu %lu\n", ft_strlen(s3), strlen(s3) );
// }
